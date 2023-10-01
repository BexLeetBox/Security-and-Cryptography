#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Replacer.h"


char* replace_special_chars(const char* input) {
    // Telle hvor mange spesialtegn som finnes i input-strengen
    int special_chars = 0;
    for (int i = 0; input[i]; i++) {
        switch (input[i]) {
            case '&':
            case '<':
            case '>':
                special_chars++;
                break;
        }
    }

    // Allokere minne for output strengen
    // + 1 for null terminator, *4 because max special character length strlength("&amp;") = 5
    // We then subtract 1 from 5 because we are replacing one character from original string with one of the newer ones
    char* output = malloc(strlen(input) + special_chars*4 + 1); // + 1 for null terminator, *4 because max spec_char = 5
    if (!output) return NULL;  // håndter feil i malloc

    int j = 0;
    for (int i = 0; input[i]; i++) {
        switch (input[i]) {
            case '&':
                strcpy(output + j, "&amp;");
                j += 5;
                break;
            case '<':
                strcpy(output + j, "&lt;");
                j += 4;
                break;
            case '>':
                strcpy(output + j, "&gt;");
                j += 4;
                break;
            default:
                output[j++] = input[i];
                break;
        }
    }
    output[j] = '\0';

    return output;
}