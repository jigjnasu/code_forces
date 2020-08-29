/*
  Contest : 550
  Problem c : Divisibility by eight
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

inline void divisible(const std::string& s) {
    if (std::stoi(s) % 8 == 0) {
        std::cout << "YES" << std::endl;
        std::cout << s << std::endl;
        exit(0);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string str;
    std::getline(std::cin, str);

    // for one char only
    if (str.find('0') != std::string::npos)
        divisible(std::string("0"));
    if (str.find('8') != std::string::npos)
        divisible(std::string("8"));

    // for two chars
    if (str.size() >= 2) {
        for (std::size_t i = 0; i < str.size() - 1; ++i) {
            for (std::size_t j = i + 1; j < str.size(); ++j) {
                std::string s;
                s.push_back(str[i]); s.push_back(str[j]);
                divisible(s);
            }
        }
    }

    // for three chars
    if (str.size() > 2) {
        for (std::size_t i = 0; i < str.size() - 2; ++i) {
            for (std::size_t j = i + 1; j < str.size() - 1; ++j) {
                for (std::size_t k = j + 1; k < str.size(); ++k) {
                    std::string s;
                    s.push_back(str[i]); s.push_back(str[j]); s.push_back(str[k]);
                    divisible(s);
                }
            }
        }
    }
    std::cout << "NO" << std::endl;

    return 0;
}
