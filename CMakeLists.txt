# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
# set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
# add_definitions("-std=c++11")
cmake_minimum_required(VERSION 3.10)

project(Algorithms LANGUAGES CXX VERSION 0.1.0)
project(factorial)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True) 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

Include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.1)
  FetchContent_MakeAvailable(Catch2)
# find_package(Catch2 REQUIRED)

include("${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
conan_basic_setup()
enable_testing()




configure_file(Config.h.in Config.h)


add_subdirectory(src)
add_subdirectory(tests)



target_include_directories(test_fact PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_executable(Algorithms apps/LinkedListDemo.cpp)
target_link_libraries(Algorithms Catch2::Catch2)
target_include_directories(Algorithms PUBLIC "${PROJECT_BINARY_DIR}") # below add_executable
target_include_directories(Algorithms PUBLIC include)

include(CTest)
include(Catch)
catch_discover_tests(Algorithms)