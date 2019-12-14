include_directories(include)
add_library(fancy src/fancy.cpp)
target_include_directories(fancy
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include
          )