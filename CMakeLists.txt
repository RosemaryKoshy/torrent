cmake_minimum_required(VERSION 3.19)
project(torrent)

set(CMAKE_CXX_STANDARD 14)

add_executable(torrent
        dump_torrent.cpp
        make_torrent.cpp
        sample_client.cpp)
