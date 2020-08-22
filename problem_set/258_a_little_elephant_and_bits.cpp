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
    bool d = false;
    if (s.find('0') == std::string::npos) {
        std::cout << s.substr(0, s.size() - 1);
    }
    else {
        for (char c : s) {
            if (d == false) {
                if (c == '0') {
                    d = true;
                    continue;
                }
            }
            std::cout << c;
        }
    }
    std::cout << std::endl;

    return 0;
}
