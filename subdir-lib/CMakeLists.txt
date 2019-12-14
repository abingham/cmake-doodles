cmake_minimum_required(VERSION 3.0.0)
project(simple VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(fancy_lib)

add_executable(simple main.cpp)
target_link_libraries(simple PUBLIC fancy)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
