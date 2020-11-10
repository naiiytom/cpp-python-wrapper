cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(mobile VERSION 0.0.1)

include_directories(/usr/local/include)

AUX_SOURCE_DIRECTORY(src SRC_FILES)

set(PROJECT_SOURCE_DIR "src")
set(PROJECT_INCLUDE_DIR "include/automobile_bits")

set(SOURCE_FILES ${PROJECT_INCLUDE_DIR}/motor.hpp ${PROJECT_SOURCE_DIR}/motor.cpp)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

add_library(automobile SHARED ${SOURCE_FILES})

target_include_directories(automobile PRIVATE include/automobile_bits)

install(TARGETS automobile DESTINATION lib)

install(FILES include/automobile DESTINATION include)

install(DIRECTORY include/automobile_bits DESTINATION include)