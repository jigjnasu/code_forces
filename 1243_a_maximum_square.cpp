/*
  Contest: 1243
  Problem A : Maximum square
  Author : Rakesh Kumar
  Date: 15/07/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    std::cout << "---------------------------------------------------------" << std::endl;
    for (int e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0;
    std::cin >> k;
    while (k--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> v(n + 1, 0);
        while (n--) {
            int e = 0;
            std::cin >> e;
            ++v[e];
        }

        int total = 0;
        for (int i = v.size() - 1; i >= 0; --i) {
            total += v[i];
            if (total >= i) {
                std::cout << i << std::endl;
                break;
            }
        }
    }

    return 0;
}
