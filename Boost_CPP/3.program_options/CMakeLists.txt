cmake_minimum_required(VERSION 3.12)
project(Main VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Main main.cxx)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost REQUIRED COMPONENTS program_options)

target_include_directories(Main PUBLIC ${Boost_INCLUDE_DIRS})

message(STATUS "Boost version: ${Boost_VERSION}")

target_link_libraries(Main PUBLIC Boost::program_options)