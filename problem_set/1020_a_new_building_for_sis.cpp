/*
  Contest: 1020
  Problem A : New Building for SIS
  Author : Rakesh Kumar
  Date: 28/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, h = 0, a = 0, b = 0, k = 0;
    std::cin >> n >> h >> a >> b >> k;
    while (k--) {
        int ta = 0, fa = 0, tb = 0, fb = 0;
        std::cin >> ta >> fa >> tb >> fb;
        int td = std::abs(ta - tb);
        int fd = 0;
        if (fa >= a && fa <= b ||
            ta == tb) {
            fd = std::abs(fa - fb);
        } else {
            const int d1 = std::abs(fa - a);
            const int d2 = std::abs(fa - b);
            if (d1 < d2)
                fd = d1 + std::abs(fb - a);
            else
                fd = d2 + std::abs(fb - b);
        }
        std::cout << td + fd << std::endl;
    }

    return 0;
}
