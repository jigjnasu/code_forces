/*
  Contest : 1311
  Problem A : Add Odd or Subtract Even
  Author : Rakesh Kumar
  Date: 11/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        int r = 0, t = 0;
        if (a != b) {
            r = 1;
            t = std::abs(a - b);
            if (a < b && (t & 1) == 0)
                ++r;
            if (a > b && t & 1)
                ++r;
        }
        std::cout << r << std::endl;
    }

    return 0;
}
