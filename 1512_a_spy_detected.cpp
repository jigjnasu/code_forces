/*
  Contest : 1512
  Problem A : Spy Detected
  Author : Rakesh Kumar
  Date: 12/11/2021
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
        std::vector<int> v;
        while (n--) {
            int n = 0;
            std::cin >> n;
            v.emplace_back(n);
        }

        bool found = false;
        for (std::size_t i = 1; i < v.size() - 1; ++i) {
            if (v[i] != v[i -1 ] && v[i] != v[i + 1]) {
                std::cout << i + 1 << std::endl;
                found = true;
            }
        }

        if (!found) {
            if (v[0] != v[1])
                std::cout << 1 << std::endl;
            else
                std::cout << v.size() << std::endl;
        }
    }

    return 0;
}