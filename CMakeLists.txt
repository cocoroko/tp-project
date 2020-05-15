cmake_minimum_required(VERSION 3.9)
project(Homework)

set(CMAKE_CXX_STANDARD 11)

add_executable(tHomework main.cpp Terrorists/Terrorists.h elfs/humanity.h Units/AbstractUnits.h Units/ConcreteUnits.h Creator/Creators.h Information/PrintInfo.h elfs/humanity.cpp humanity/humanity.cpp Information/PrintInfo.cpp)


