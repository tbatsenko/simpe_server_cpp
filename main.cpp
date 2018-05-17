#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>
#include <boost/bind.hpp>
#include <string>
#include <memory>
#include <iostream>
#include "boost/filesystem.hpp"
#include <thread>
#include <vector>



#include "detector.hpp"
#include "http_headers.h"
#include "session.h"
#include "client.h"


using namespace boost;
using namespace boost::system;
using namespace boost::asio;
using namespace drodil::file::mime;
namespace fs = boost::filesystem;

class session;


void accept_and_run(ip::tcp::acceptor& acceptor, io_service& io_service)
{
    std::shared_ptr<session> sesh = std::make_shared<session>(io_service);

    acceptor.async_accept(sesh->socket, [sesh, &acceptor, &io_service](const error_code& accept_error)
    {
        accept_and_run(acceptor, io_service);
        if(!accept_error)
        {
            session::interact(sesh);
        }
    });
}

int main(int argc, const char * argv[])
{

    io_service ioservice;

    int NUM_THREADS = 3;

    boost::asio::io_service::work some_work(ioservice);

    const ip::tcp::endpoint endpoint{ip::tcp::v4(), 3000};
    ip::tcp::acceptor acceptor{ioservice, endpoint};

    acceptor.listen();

    boost::thread_group threads;
    for (int i = 0; i < NUM_THREADS; ++i) {
        threads.create_thread(boost::bind(&io_service::run, &ioservice));
    }

    accept_and_run(acceptor, ioservice);

    ioservice.run();

    threads.join_all();

    return 0;
}
