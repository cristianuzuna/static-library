cmake_minimum_required(VERSION 3.11)

if ( ${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR} )
    message( FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt." )
endif()

project(main)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


# message("CMAKE_SOURCE_DIR:" ${CMAKE_SOURCE_DIR})

### Setup CMake variables
set(CMAKE_LIB_DIR ${CMAKE_SOURCE_DIR}/code/lib)
set(CMAKE_INC_DIR ${CMAKE_SOURCE_DIR}/code/include)

### Bring headers into project
include_directories(${CMAKE_SOURCE_DIR}/code/include)

### Can manually add the sources using the set command as follows:
### However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(myapp code/src/main.cpp code/src/temperature.cpp code/MathFuncsLib/MathFuncsLib.cpp)

message ("DEST_BINDIR: $ENV{DEST_BINDIR}")

add_library(MathFuncs STATIC ${CMAKE_SOURCE_DIR}/code/MathFuncsLib/MathFuncsLib.cpp)

set_target_properties(MathFuncs PROPERTIES PUBLIC_HEADER ${CMAKE_INC_DIR}/MathFuncsLib.h)

install(TARGETS myapp MathFuncs
  RUNTIME DESTINATION $ENV{DEST_BINDIR}
  ARCHIVE DESTINATION $ENV{DEST_LIBDIR}
  PUBLIC_HEADER DESTINATION $ENV{DEST_INCDIR}
)
