#include <boost/asio.hpp>
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

//std::thread run_thread(
//        std::bind(static_cast<size_t(boost::asio::io_service::*)()>(
//                          &boost::asio::io_service::run), std::ref(io_service)));

int main(int argc, const char * argv[])
{
    io_service ioservice;

    ip::tcp::endpoint endpoint{ip::tcp::v4(), 3000};
    ip::tcp::acceptor acceptor{ioservice, endpoint};

    acceptor.listen();

    accept_and_run(acceptor, ioservice);


    const int THREADS_AMOUNT = 2;
    std::vector<std::thread> threads;

    for (int i = 0; i < THREADS_AMOUNT; ++i) {

        threads.emplace_back([&ioservice](){ ioservice.run(); });
    }

    for (int i = 0; i < THREADS_AMOUNT; ++i) {
        threads[i].join();
    }


//    ioservice.run();

    return 0;
}

