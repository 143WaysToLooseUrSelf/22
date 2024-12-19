cmake_minimum_required(VERSION 3.16)
project(22)

set(CMAKE_CXX_STANDARD 14)

add_executable(22 main.cpp snack.cpp snack.h SnackSlot.cpp SnackSlot.h VendingMachine.cpp VendingMachine.h human.cpp human.h)