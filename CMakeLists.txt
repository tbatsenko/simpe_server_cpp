cmake_minimum_required(VERSION 3.9)
project(simple_server_cpp)

set(CMAKE_CXX_STANDARD 14)
FIND_PACKAGE( Boost 1.66 COMPONENTS program_options filesystem REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(simple_server_cpp main.cpp)

TARGET_LINK_LIBRARIES( simple_server_cpp LINK_PUBLIC ${Boost_LIBRARIES} -lboost_thread-mt )
