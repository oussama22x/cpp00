#include <iostream>

bool iswhitespace(std::string str) {
    int i;
    int x;
    x = 0;
    for(i = 0; i  < str.length(); i++) {
        if(str[i] == ' ' || str[i] == '\t')
            x++;
    }
    if(x == str.length())
        return 1;
    return 0;
}

int main() {
    std::string userInput;

    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    if (iswhitespace(userInput)) {
        std::cout << "The string contains only whitespace.\n";
    } else {
        std::cout << "The string contains non-whitespace characters.\n";
    }

    return 0;
}