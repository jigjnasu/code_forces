/*
  Contest : 1213
  Problem B : Bad prices
  Author : Rakesh Kumar
  Date: 19/07/2020
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
        std::vector<int> ps;
        while (n--) {
            int p = 0;
            std::cin >> p;
            ps.emplace_back(p);
        }

        int bad_days = 0;
        int min = ps[ps.size() - 1];
        for (int i = ps.size() - 2; i >= 0; --i) {
            if (ps[i] > min) ++bad_days;
            min = std::min(min, ps[i]);
        }
        std::cout << bad_days << std::endl;
    }

    return 0;
}
