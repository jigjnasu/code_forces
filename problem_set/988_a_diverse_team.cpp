/*
  Contest: 988
  Problem A : Diverse Team
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    int k = 0;
    std::cin >> n >> k;
    std::unordered_map<int, int> d;
    for (int i = 1; i <= n; ++i) {
        int r = 0;
        std::cin >> r;
        d[r] = i;
    }

    if (k <= d.size()) {
        std::cout << "YES" << std::endl;
        int i = 0;
        auto it = d.begin();
        while (i < k) {
            std::cout << it->second << " ";
            ++i; ++it;
        }
        std::cout << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
