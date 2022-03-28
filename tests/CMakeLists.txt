project(factorial)
add_executable(test_fact test_fact.cpp)
target_link_libraries(test_fact ${CMAKE_SOURCE_DIR}/src/fact.cpp)
