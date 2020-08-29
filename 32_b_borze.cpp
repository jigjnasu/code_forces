/*
  Contest 32
  Problem B : Borze
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <iostream>
#include <string>

int main() {
    std::string code;
    std::getline(std::cin, code);

    int i = 0;
    std::string r;
    while (i < code.size()) {
        if (i + 1 < code.size() && code[i] == '-' && code[i + 1] == '-') {
            r += '2';
            i += 2;
        } else if (i + 1 < code.size() && code[i] == '-' && code[i + 1] == '.') {
            r += '1';
            i += 2;
        } else {
            r += '0';
            ++i;
        }
    }
    std::cout << r << std::endl;

    return 0;
}
