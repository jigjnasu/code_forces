/*
  Contest : 313
  Problem A : Ilya and Bank Account
  Author : Rakesh Kumar
  Date: 31/01/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    if (n < 0) {
        std::string s = std::to_string(n);
        int a = std::stoi(s.substr(0, s.size() - 1));
        int b = std::stoi(s.substr(0, s.size() - 2) + s[s.size() - 1]);
        std::cout << std::max(a, b) << std::endl;
    } else {
        std::cout << n << std::endl;
    }

    return 0;
}
