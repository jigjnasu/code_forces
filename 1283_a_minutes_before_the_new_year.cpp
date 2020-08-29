/*
  Contest : 1283
  Problem A : Minutes before the new year
  Author : Rakesh Kumar
  Date: 23/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int h = 0, m = 0;
        std::cin >> h >> m;
        std::cout << ((23 - h) * 60) + (60 - m) << std::endl;
    }

    return 0;
}
