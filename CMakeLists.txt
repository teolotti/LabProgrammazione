cmake_minimum_required(VERSION 3.16)
project(LabProgrammazione)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES User.cpp User.h Message.cpp Message.h Chat.cpp Chat.h Observer.h Subject.h MessageAlert.cpp MessageAlert.h UnreadMessagesAlert.cpp UnreadMessagesAlert.h UpdateTest.h)
add_executable(LabProgrammazione main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(LabProgrammazione core)

