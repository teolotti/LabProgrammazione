cmake_minimum_required(VERSION 3.16)
project(LabProgrammazione)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)


add_executable(LabProgrammazione main.cpp User.cpp User.h Message.cpp Message.h Chat.cpp Chat.h)
