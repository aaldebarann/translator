cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME translator)
project(${PROJECT_NAME})

# TODO: not sure if these lines are needed
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})

set(TR_LIBRARY "${PROJECT_NAME}")
set(TR_TESTS   "test_${PROJECT_NAME}")
set(TR_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(TR_SRC "src_${PROJECT_NAME}")

include_directories("${TR_INCLUDE}" gtest)

# BUILD
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(gtest)
add_subdirectory(samples)
add_subdirectory(include)

# REPORT
message( STATUS "")
message( STATUS "General configuration for ${PROJECT_NAME}")
message( STATUS "======================================")
message( STATUS "")
message( STATUS "   Configuration: ${CMAKE_BUILD_TYPE}")
message( STATUS "")