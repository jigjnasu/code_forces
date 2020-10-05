/*
  Contest : 1307
  Problem A : Cow and Haybales
  Author : Rakesh Kumar
  Date: 05/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, d = 0;
        std::cin >> n >> d;
        int total = 0;
        std::cin >> total;
        for (int i = 1; i < n; ++i) {
            int p = 0;
            std::cin >> p;
            if (p) {
                const int t = std::min(d / i, p);
                total += t;
                d -= t * i;
            }
        }
        std::cout << total << std::endl;
    }

    return 0;
}
