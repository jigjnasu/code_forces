/*
  Contest: 474
  Problem A : Keyboard
  Author : Rakesh Kumar
  Date: 17/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);

    const std::string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char d = ' ';
    std::cin >> d;
    std::cin.ignore();

    std::string l;
    std::getline(std::cin, l);

    for (char c : l) {
        const std::size_t pos = k.find(c);
        if (d == 'L')
            std::cout << k[pos + 1];
        else
            std::cout << k[pos - 1];
    }

    std::cout << std::endl;

    return 0;
}
