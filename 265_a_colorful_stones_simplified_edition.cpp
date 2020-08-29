/*
  Contest : 265
  Problem A : Colorful Stones (Simplified Edition)
  Author : Rakesh Kumar
  Date: 25/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::getline(std::cin, s);
    std::getline(std::cin, t);

    int pos = 0;
    for (char c : t)
        if (s[pos] == c) ++pos;
    std::cout << pos + 1 << std::endl;

    return 0;
}
