cmake_minimum_required(VERSION 3.11)

if ( ${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR} )
    message( FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt." )
endif()

project(main)

# message("CMAKE_SOURCE_DIR:" ${CMAKE_SOURCE_DIR})

### Setup CMake variables
set(DEST_DIR ${CMAKE_SOURCE_DIR}/../MathLib-project/build/DESTINATION)

message ("DEST_BINDIR: ${DEST_DIR}")

### Bring headers into project
include_directories(${DEST_DIR}/usr/inc)

add_executable(get-time ${CMAKE_SOURCE_DIR}/code/src/get-time.cpp)

target_link_libraries(get-time ${DEST_DIR}/usr/lib/libMathFuncs.a)
