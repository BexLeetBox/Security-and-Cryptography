cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Replacer)

# Add the source files for the Replacer library
add_library(ReplacerLib Replacer.c)

# Add the executable for main
add_executable(ReplacerExecutable main.c)

# Link the Replacer library to the main executable
target_link_libraries(ReplacerExecutable ReplacerLib)

# Add the tests subdirectory to the project
enable_testing()
add_subdirectory(tests)
