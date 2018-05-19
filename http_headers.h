#ifndef SIMPLE_SERVER_CPP_HTTP_HEADERS_H
#define SIMPLE_SERVER_CPP_HTTP_HEADERS_H

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


class http_headers
{
    std::string method;
    std::string url;
    std::string version;
    std::map<std::string, std::string> headers;

public:
    std::string get_response();

    int content_length();

    void on_read_header(std::string line);

    void on_read_request_line(std::string line);
};

#endif //SIMPLE_SERVER_CPP_HTTP_HEADERS_H
