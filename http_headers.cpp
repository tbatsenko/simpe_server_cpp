//
// Created by Tanya Batsenko on 5/15/18.
//


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


std::string http_headers::get_response()
{
    std::stringstream ssOut;
    Detector detector;

    // return index.html on root path
    if (url == "/") { url = "/index.html"; }
    fs::path sourceFile("../public" + url);

    if (fs::exists(sourceFile)) {
        std::ifstream t(sourceFile.string());
        std::string sResponseBody((std::istreambuf_iterator<char>(t)),
                                  std::istreambuf_iterator<char>());

        ssOut << "HTTP/1.1 200 OK" << std::endl;
        ssOut << "content-type: " + detector.detect(sourceFile.string()) << std::endl;
        ssOut << "content-length: " << sResponseBody.length() << std::endl;
        ssOut << std::endl;
        ssOut << sResponseBody;
    } else {
        std::string sResponseBody = "<html><body><h1>404 Not Found</h1><p>There's nothing here.</p></body></html>";
        ssOut << "HTTP/1.1 404 Not Found" << std::endl;
        ssOut << "content-type: text/html" << std::endl;
        ssOut << "content-length: " << sResponseBody.length() << std::endl;
        ssOut << std::endl;
        ssOut << sResponseBody;
    }

    return ssOut.str();
}

int http_headers::content_length()
{
    auto request = headers.find("content-length");
    if(request != headers.end())
    {
        std::stringstream ssLength(request->second);
        int content_length;
        ssLength >> content_length;
        return content_length;
    }
    return 0;
}

void http_headers::on_read_header(std::string line)
{
    std::stringstream ssHeader(line);
    std::string headerName;
    std::getline(ssHeader, headerName, ':');

    std::string value;
    std::getline(ssHeader, value);
    headers[headerName] = value;
}

void http_headers::on_read_request_line(std::string line)
{
    std::stringstream ssRequestLine(line);
    ssRequestLine >> method;
    ssRequestLine >> url;
    ssRequestLine >> version;
}