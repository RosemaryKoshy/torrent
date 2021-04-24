cmake_minimum_required(VERSION 3.19)
project(torrent)

set(CMAKE_CXX_STANDARD 14)

add_executable(simple_client simple_client.cpp)
add_executable(dump_torrent dump_torrent.cpp)
add_executable(make_torrent make_torrent.cpp)

