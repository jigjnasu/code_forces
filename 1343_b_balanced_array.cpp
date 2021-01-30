/*
  Contest : 1343
  Problem B : B. Balanced Array
  Author : Rakesh Kumar
  Date: 31/01/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        if ((n >> 1) & 1) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
            const int t = n >> 1;
            int s = 0;
            for (int i = 1; i <= t; ++i) {
                const int t = i * 2;
                s += t;
                std::cout << t << " ";
            }

            int s1 = 0;
            for (int i = 0; i < t - 1; ++i) {
                const int t = (i * 2) + 1;
                std::cout << t << " ";
                s1 += t;
            }
            std::cout << s - s1 << std::endl;
        }
    }

    return 0;
}
