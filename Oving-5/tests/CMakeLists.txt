add_executable(replacer_test replacer_test.c)
target_link_libraries(replacer_test ReplacerLib)
target_compile_options(replacer_test PRIVATE -fsanitize=address)
target_link_options(replacer_test PRIVATE -fsanitize=address)
add_test(NAME replacer_test COMMAND replacer_test)



add_executable(utility_fuzzer_test utility_fuzzer_test.c)
target_link_libraries(utility_fuzzer_test ReplacerLib)
target_compile_options(utility_fuzzer_test PRIVATE -fsanitize=address,fuzzer)
target_link_options(utility_fuzzer_test PRIVATE -fsanitize=address,fuzzer)




