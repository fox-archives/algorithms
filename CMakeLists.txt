cmake_minimum_required(VERSION 3.10)

project(Algorithms VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True) # above add_executable

configure_file(Config.h.in Config.h)


add_executable(Algorithms ./Run/main.cpp)
target_include_directories(Algorithms PUBLIC "${PROJECT_BINARY_DIR}") # below add_executable
