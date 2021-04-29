/*
  Contest : 1353
  Problem B : Two Arrays and Swaps
  Author : Rakesh Kumar
  Date: 29/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, k = 0, e = 0, s = 0;
        std::cin >> n >> k;
        std::vector<int> a, b;
        for (int i = 0; i < n; ++i) {
            std::cin >> e;
            s += e;
            a.emplace_back(e);
        }
        std::sort(a.begin(), a.end());
        for (int i = 0; i < n; ++i) {
            std::cin >> e;
            b.emplace_back(e);
        }
        std::sort(b.begin(), b.end(), [](int p, int q) {
            return p > q;
        });
        for (int i = 0; i < k; ++i)
            s += std::max(b[i] - a[i], 0);
        std::cout << s << std::endl;
    }

    return 0;
}
