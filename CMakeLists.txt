cmake_minimum_required(VERSION 3.30)

project(Diagrammer)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

ADD_EXECUTABLE(Diagrammer  ./tests/main.cpp ./tests/basic.cpp)

ADD_subdirectory(src)

TARGET_LINK_LIBRARIES(Diagrammer DiagrammerLib)

