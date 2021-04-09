/*
  Contest : 1453
  Problem A : Cancel the trains
  Author : Rakesh Kumar
  Date: 09/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, m = 0;
        std::cin >> n >> m;
        std::vector<int> v(102, 0);
        while (n--) {
            int t = 0;
            std::cin >> t;
            ++v[t];
        }
        while (m--) {
            int t = 0;
            std::cin >> t;
            ++v[t];
        }
        int r = 0;
        for (int f : v)
            r += std::max(0, f - 1);
        std::cout << r << std::endl;
    }

    return 0;
}
