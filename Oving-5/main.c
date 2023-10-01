#include <stdio.h>
#include <stdlib.h>

#include "Replacer.h"





int main() {
    char input[] = "Hello & World < Test > &";
    char* result = replace_special_chars(input);

    if (result) {
        printf("Original: %s\n", input);
        printf("Modified: %s\n", result);
        free(result);
    }

    return 0;
}