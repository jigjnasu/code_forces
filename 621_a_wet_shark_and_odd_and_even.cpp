/*
  Contest : 621
  Problem A : Wet Shark and Odd and Even
  Author : Rakesh Kumar
  Date: 04/08/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int odd_count = 0;
    int odd_min = (1e+9) + 1;
    ull total = 0;
    while (n--) {
        int e = 0;
        std::cin >> e;
        total += e;
        if (e & 1 == 1) {
            ++odd_count;
            odd_min = std::min(odd_min, e);
        }
    }

    if (odd_count & 1 == 1) total -= odd_min;
    std::cout << total << std::endl;

    return 0;
}
