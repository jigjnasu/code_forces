/*
  Contest: 919
  Problem B : Perfect number
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

bool perfect_number(const std::string& n) {
    int s = 0;
    for (char c : n)
        s += c - '0';
    return s == 10;
}

int main() {
    int k = 0;
    std::cin >> k;

    int x = 0;
    int i = 19;
    while (k != x) {
        if (perfect_number(std::to_string(i)))
            ++x;
        ++i;
    }

    std::cout << --i << std::endl;

    return 0;
}
