# CMake based on work from @xantares
cmake_minimum_required (VERSION 3.1.0)

# By default, build in Release mode. Must appear before project() command
if (NOT DEFINED CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE Release CACHE STRING "Build type")
endif ()

project(hellojsoncpp)

find_package (jsoncpp NO_MODULE REQUIRED)
message (STATUS "Found jsoncpp: ${jsoncpp_DIR}")

add_executable (hello main.cxx)
target_link_libraries (hello jsoncpp_lib_static)
install (TARGETS hello DESTINATION bin)

enable_testing()
add_test (NAME hello COMMAND hello)

