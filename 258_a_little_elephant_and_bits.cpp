/*
  Contest : 258
  Problem A : Little Elephant and Bits
  Author : Rakesh Kumar
  Date: 23/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    const std::size_t pos = s.find('0');
    if (pos == std::string::npos) {
        std::cout << s.substr(0, s.size() - 1);
    }
    else {
        std::cout << s.substr(0, pos);
        std::cout << s.substr(pos + 1, s.size() - pos + 1);
    }
    std::cout << std::endl;

    return 0;
}
