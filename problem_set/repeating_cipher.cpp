/*
  Contest: 1095
  Problem A : Repeating Cipher
  Author : Rakesh Kumar
  Date: 22/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<short> d;
    for (short n = 0; n < 11; ++n)
        d.push_back((n * (n + 1)) >> 1);

    short n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string line;
    std::getline(std::cin, line);

    for (short p : d)
        if (p < line.size())
            std::cout << line[p];
    std::cout << std::endl;

    return 0;
}
