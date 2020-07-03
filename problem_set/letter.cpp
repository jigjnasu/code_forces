/*
  Contest 43
  Problem B : Letter
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string h1;
    std::string h2;
    std::getline(std::cin, h1);
    std::getline(std::cin, h2);

    std::vector<int> a(255, 0);
    std::vector<int> b(255, 0);

    for (char c : h1)
        ++a[c];
    for (char c : h2)
        ++b[c];

    const char c = ' ';
    a[c] = b[c] = 0;

    std::string result = "YES";
    for (std::size_t i = 0; i < a.size(); ++i) {
        if (b[i] > a[i]) {
            result = "NO";
            break;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
