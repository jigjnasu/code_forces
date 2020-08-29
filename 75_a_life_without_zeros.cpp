/*
  Contest : 75
  Problem A : Life Without Zeros
  Author : Rakesh Kumar
  Date: 07/08/2020
*/

#include <bits/stdc++.h>

inline std::string without_zero(const std::string& s) {
    std::string r;
    for (char c : s)
        if (c != '0')
            r += c;
    return r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    const int c = std::stoi(without_zero(std::to_string(a + b)));
    a = std::stoi(without_zero(std::to_string(a)));
    b = std::stoi(without_zero(std::to_string(b)));
    std::cout << (c == a + b ? "YES" : "NO") << std::endl;

    return 0;
}
