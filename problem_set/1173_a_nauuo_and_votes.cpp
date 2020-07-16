/*
  Contest : 1173
  Problem A : Nauuo and votes
  Author : Rakesh Kumar
  Date: 17/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    int x = 0;
    int y = 0;
    int z = 0;
    std::cin >> x >> y >> z;
    const int d = std::abs(x - y);
    if (z && z >= d)
        std::cout << "?" << std::endl;
    else if (x > y)
        std::cout << "+" << std::endl;
    else if (x < y)
        std::cout << "-" << std::endl;
    else
        std::cout << "0" << std::endl;

    return 0;
}
