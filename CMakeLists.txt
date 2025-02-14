# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.15)

# Set the project name and metadata
project(PROJECT_NAME VERSION 1.0 DESCRIPTION "Discord Bot using DPP" LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output directory for the compiled binary
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Add DPP as a subdirectory
add_subdirectory(libs/DPP)

# Include DPP headers and our own source directory (for headers)
include_directories(libs/DPP/include/dpp)
include_directories(${PROJECT_SOURCE_DIR}/src)

# Add source files
add_executable(run 
    src/main.cpp 
    src/token.cpp 
    src/signal_handler.cpp 
    src/commands.cpp
)

# Link DPP to the bot
target_link_libraries(run PRIVATE dpp)
