/*
  Contest : 908
  Problem A : New Year and Counting Cards
  Author : Rakesh Kumar
  Date: 07/08/2020
*/

#include <bits/stdc++.h>

inline bool vowel(char c) {
    return (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u');
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    int count = 0;
    for (char c : s) {
        if (vowel(c)) ++count;
        if ((c >= '0' && c <= '9') &&
            ((c - '0') & 1 == 1)) ++count;
    }
    std::cout << count << std::endl;

    return 0;
}
