/*
  Contest: 488
  Problem A : Giga Tower
  Author : Rakesh Kumar
  Date: 30/07/2020
*/

#include <bits/stdc++.h>

inline bool lucky(const std::string& s) {
    return s.find('8') != std::string::npos;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int i = n + 1;
    int count = 1;
    while (1) {
        if (lucky(std::to_string(i++)))
            break;
        ++count;
    }
    std::cout << count << std::endl;

    return 0;
}
