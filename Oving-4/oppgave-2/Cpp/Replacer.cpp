#include <iostream>
#include <string>

std::string replace_special_chars(const std::string &input) {
    std::string output;
    for (char ch : input) {
        switch (ch) {
            case '&':
                output += "&amp;";
                break;
            case '<':
                output += "&lt;";
                break;
            case '>':
                output += "&gt;";
                break;
            default:
                output += ch;
                break;
        }
    }
    return output;
}

int main() {
    std::string input = "Hello, World & Friends <3 >2!";
    std::string result = replace_special_chars(input);

    std::cout << "Original: " << input << std::endl;
    std::cout << "Modified: " << result << std::endl;

    return 0;
}
