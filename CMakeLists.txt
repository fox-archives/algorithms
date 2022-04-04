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

# add_subdirectory(src)
# add_subdirectory(tests)

add_executable(test_Algebra "tests/test_Algebra.cpp")
target_include_directories(test_Algebra PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(test_Algebra PUBLIC "include")
target_link_libraries(test_Algebra "${CMAKE_SOURCE_DIR}/src/Algebra.cpp")

add_executable(demo_Algebra "demos/demo_Algebra.cpp")
target_include_directories(demo_Algebra PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(demo_Algebra PUBLIC "include")
target_link_libraries(demo_Algebra "${CMAKE_SOURCE_DIR}/src/Algebra.cpp")

add_executable(test_LinkedList "tests/test_LinkedList.cpp")
target_include_directories(test_LinkedList PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(test_LinkedList PUBLIC "include")

add_executable(demo_LinkedList "demos/demo_LinkedList.cpp")
target_include_directories(demo_LinkedList PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(demo_LinkedList PUBLIC "include")


# add_executable(Algorithms apps/LinkedListDemo.cpp)

# target_link_libraries(Algorithms Catch2::Catch2)
# target_include_directories(Algorithms PUBLIC "${PROJECT_BINARY_DIR}") # below add_executable
# target_include_directories(Algorithms PUBLIC includes)

include(CTest)
include(Catch)
# catch_discover_tests(Algorithms)

set(CMAKE_EXPORT_COMPILE_COMMANDS)