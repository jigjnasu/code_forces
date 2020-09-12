/*
  Contest : 746
  Problem A : Compote
  Author : Rakesh Kumar
  Date: 13/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int l = 0, a = 0, p = 0;
    std::cin >> l >> a >> p;
    if (a < 2 || p < 4) {
        std::cout << 0 << std::endl;
    } else {
        for (int x = 1; x <= 275; ++x) {
            if (x > l || (x << 1) > a || 4 * x > p) {
                --x;
                std::cout << x  + (x << 1) + (4 * x) << std::endl;
                break;
            }
        }
    }

    return 0;
}
