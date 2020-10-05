/*
  Contest : 34
  Problem A : Reconnaissance 2
  Author : Rakesh Kumar
  Date: 05/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int p = 0, f = 0, h = 0, min = 1e+9, x = 0, y = 0;
    std::cin >> p;
    f = p;
    for (int i = 2; i <= n; ++i) {
        std::cin >> h;
        if (std::abs(h - p) < min) {
            x = i - 1;
            y = i;
            min = std::abs(h - p);
        }
        p = h;
    }
    if (std::abs(h - f) < min) {
        x = n;
        y = 1;
    }
    std::cout << x << " " << y << std::endl;

    return 0;
}
