/*
  Contest : 1183
  Problem A : Nearest intersting number
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

inline bool intresting(const std::string& a) {
    short s = 0;
    for (char c : a)
        s += c - '0';
    return s % 4 == 0;
}

int main() {
    short a = 0;
    std::cin >> a;

    while (1) {
        if (intresting(std::to_string(a))) {
            std::cout << a << std::endl;
            break;
        }
        ++a;
    }

    return 0;
}
