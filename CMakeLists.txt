cmake_minimum_required(VERSION 3.2.2)
project(Electra)

#header files
include_directories(include)
include_directories(include/vendor)

#sources
file(GLOB SOURCES "src/*.cpp")
file(GLOB VENDORS "src/vendor/*.cpp")

add_executable(Electra ${SOURCES} ${VENDORS})

#c++ standard
set_property(TARGET Electra PROPERTY CXX_STANDARD 11)
set_property(TARGET Electra PROPERTY CXX_STANDARD_REQUIRED ON)
