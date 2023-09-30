cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Replacer)

# Add the executable for Replacer
add_executable(Replacer Replacer.c)

add_executable(replacer_test ./tests/replacer_test.c)
add_executable(utility_fuzzer_test ./tests/utility_fuzzer_test.c)
