cmake_minimum_required(VERSION 3.27.0)
project(specialized-cedar VERSION 1.0 LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# set output executable file directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories("./includes/")

add_executable(mkcedar "./src/mkcedar.cpp")
add_executable(cedar "./src/cedar.cpp")

file(COPY "${CMAKE_HOME_DIRECTORY}/assets/words.txt" DESTINATION "${CMAKE_BINARY_DIR}/bin")
