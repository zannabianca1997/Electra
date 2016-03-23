cmake_minimum_required(VERSION 3.2.2)
project(Electra)

#header files
include_directories(include)

#sources
file(GLOB SOURCES "src/*.cpp")

add_executable(Electra ${SOURCES})
