cmake_minimum_required(VERSION 3.22)
project(Chapter_6_Functions_and_Introduction_to_Recursion)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter_6_Functions_and_Introduction_to_Recursion
        Chapter6Examples/Examples.cpp
        Chapter6Examples/GameOfChance.cpp
        Chapter6Examples/RandomIntegers.cpp
        main.cpp
        Chapter5Exercises/ComputerAssistedInstruction.cpp
        Chapter5Exercises/ComputerAssistedInstruction.h)
