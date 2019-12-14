cmake_minimum_required(VERSION 3.0.0)
project(mymod VERSION 0.1.0)

add_subdirectory(pybind11)
pybind11_add_module(mymod mymod.cpp)
