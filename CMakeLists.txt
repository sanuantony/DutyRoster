cmake_minimum_required(VERSION 3.28.0)

project(Enterprise)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_GENERATOR_PLATFORM x86)

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/src/header
    ${PROJECT_SOURCE_DIR}/lib  # Include the directory containing json.hpp
)

# Source files
set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/source/main.cpp
    ${PROJECT_SOURCE_DIR}/src/source/doctor.cpp
    ${PROJECT_SOURCE_DIR}/src/source/employee.cpp
    ${PROJECT_SOURCE_DIR}/src/source/hod.cpp
    ${PROJECT_SOURCE_DIR}/src/source/roster.cpp
    ${PROJECT_SOURCE_DIR}/src/source/department.cpp
    ${PROJECT_SOURCE_DIR}/src/source/leave_plan.cpp
)

# Output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES})

# to make sure it's accessible during build.
configure_file(${PROJECT_SOURCE_DIR}/lib/json.hpp ${CMAKE_BINARY_DIR}/json.hpp COPYONLY)
