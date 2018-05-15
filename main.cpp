#include <boost/asio.hpp>
#include <string>
#include <memory>
#include <iostream>
#include "boost/filesystem.hpp"
#include "detector.hpp"
#include "http_headers.h"
#include "session.h"

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
    io_service io_service;
    ip::tcp::endpoint endpoint{ip::tcp::v4(), 3000};
    ip::tcp::acceptor acceptor{io_service, endpoint};

    acceptor.listen();
    accept_and_run(acceptor, io_service);

    io_service.run();
    return 0;
}