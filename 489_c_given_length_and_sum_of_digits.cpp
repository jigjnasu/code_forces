/*
  Contest : 489
  Problem C : Given Length and Sum of Digits...
  Author : Rakesh Kumar
  Date: 06/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int m = 0, s = 0;
    std::cin >> m >> s;
    if (!s) {
        std::cout << (m == 1 ? "0 0" : "-1 -1") << std::endl;
    } else {
        std::string x, y;
        for (int i = 0; i < m; ++i) {
            const int t = std::min(s, 9);
            y += t + '0';
            s -= t;
        }
        if (s > 0) {
            std::cout << "-1 -1" << std::endl;
            return 0;
        }
        for (int i = m - 1; i >= 0; --i)
            x += y[i];
        int i = 0;
        for (; x[i] == '0'; ++i);
        x[i]--; x[0]++;
        std::cout << x << " " << y << std::endl;
    }

    return 0;
}
