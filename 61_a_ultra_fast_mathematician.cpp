/*
  Contest : 61
  Problem A : Ultra-Fast Mathematician
  Author : Rakesh Kumar
  Date: 27/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string a;
    std::getline(std::cin, a);
    std::string b;
    std::getline(std::cin, b);
    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << static_cast<int>((a[i] - '0') ^ (b[i] - '0'));
    std::cout << std::endl;

    return 0;
}
