cmake_minimum_required(VERSION 3.26)
project(Mazmum)

set(CMAKE_CXX_STANDARD 23)

add_executable(Mazmum
        Engine\NTLM.cxx
        main.cxx)
