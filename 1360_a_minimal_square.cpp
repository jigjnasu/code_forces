/*
  Contest : 1360
  Problem A : A. Minimal Square
  Author : Rakesh Kumar
  Date: 04/03/2021
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

        if (a == b) {
            std::cout << (a << 1) * (a << 1) << std::endl;
        } else {
            if ((a << 1) <= b) {
                std::cout << b * b << std::endl;
            } else if ((b << 1) <= a) {
                std::cout << a * a << std::endl;
            } else {
                int x = INT_MAX, y = INT_MAX;
                if ((a << 1) >= b)
                    x = a << 1;
                if ((b << 1) >= a)
                    y = b << 1;
                std::cout << (std::min(x, y) * std::min(x, y)) << std::endl;
            }
        }
    }

    return 0;
}
