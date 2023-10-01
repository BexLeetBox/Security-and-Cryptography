#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "../Replacer.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    // Convert fuzzer input into a null-terminated string
    char *input_string = malloc(size + 1);
    if (!input_string) return 0;

    memcpy(input_string, data, size);
    input_string[size] = '\0'; // null-terminate the string

    // Call the target function
    char* result = replace_special_chars(input_string);

    // Cleanup
    free(result);
    free(input_string);

    return 0;
}
