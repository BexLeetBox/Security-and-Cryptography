#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "../Replacer.h"

int main() {
    char *test_input1 = "Symbols: < & >";
    char *expected_output1 = replace_special_chars(test_input1);
    assert(strcmp(expected_output1, "Symbols: &lt; &amp; &gt;") == 0);
    free(expected_output1);

    char *test_input2 = "plain text";
    char *expected_output2 = replace_special_chars(test_input2);
    assert(strcmp(test_input2, expected_output2) == 0);
    free(expected_output2);

    char *test_input3 = "More symbols: << >> &&";
    char *expected_output3 = replace_special_chars(test_input3);
    assert(strcmp(expected_output3, "More symbols: &lt;&lt; &gt;&gt; &amp;&amp;") == 0);
    free(expected_output3);

    printf("All tests passed successfully!\n");
    return 0;
}
