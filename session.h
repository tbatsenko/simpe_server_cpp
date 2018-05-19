#ifndef SIMPLE_SERVER_CPP_SESSION_H
#define SIMPLE_SERVER_CPP_SESSION_H

#include "http_headers.h"
#include <boost/asio.hpp>
#include <string>
#include <memory>
#include <iostream>
#include "boost/filesystem.hpp"
#include "detector.hpp"


using namespace boost;
using namespace boost::system;
using namespace boost::asio;
using namespace drodil::file::mime;
namespace fs = boost::filesystem;



class session
{
    asio::streambuf buff;
    http_headers headers;

    static void read_next_line(std::shared_ptr<session> pThis)
    {
        asio::async_read_until(pThis->socket, pThis->buff, '\r', [pThis](const error_code& e, std::size_t s)
        {
            std::string line, ignore;

            std::istream stream {&pThis->buff};
            std::getline(stream, line, '\r');
            std::getline(stream, ignore, '\n');

            pThis->headers.on_read_header(line);

            if(line.length() == 0)
            {
                // Handling GET request
                if(pThis->headers.content_length() == 0)
                {
                    std::shared_ptr<std::string> str = std::make_shared<std::string>(pThis->headers.get_response());
                    asio::async_write(pThis->socket, boost::asio::buffer(str->c_str(), str->length()), [pThis, str](const error_code& e, std::size_t s){});
                }
            }
            else
            {
                pThis->read_next_line(pThis);
            }
        });
    }

    static void read_first_line(std::shared_ptr<session> pThis) {
        asio::async_read_until(pThis->socket, pThis->buff, '\r', [pThis](const error_code &e, std::size_t s) {
            std::string line, ignore;

            std::istream stream{&pThis->buff};

            // if on Windows
            std::getline(stream, line, '\r');

            std::getline(stream, ignore, '\n');

            pThis->headers.on_read_request_line(line);
            pThis->read_next_line(pThis);
        });
    }

public:
    ip::tcp::socket socket;

    session(io_service& io_service)
            :socket(io_service)
    {
    }

    static void interact(std::shared_ptr<session> pThis)
    {
        read_first_line(pThis);
    }
};


#endif //SIMPLE_SERVER_CPP_SESSION_H
