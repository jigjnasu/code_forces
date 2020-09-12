/*
  Contest : 1409
  Problem A : Yet Another Two Integers Problem
  Author : Rakesh Kumar
  Date: 13/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while(t--) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        std::cout << static_cast<unsigned long long int>(std::ceil(std::abs(a - b) / static_cast<double>(10))) << std::endl;
    }

    return 0;
}
