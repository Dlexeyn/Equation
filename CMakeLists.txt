cmake_minimum_required(VERSION 3.23)
project(Equation)

set(CMAKE_CXX_STANDARD 17)

add_executable(Equation main.cpp Solver.cpp Solver.h reader.cpp reader.h writer.cpp writer.h equation.cpp equation.h)
