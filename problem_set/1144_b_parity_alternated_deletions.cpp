/*
  Contest : 1144
  Problem B : Parity Alternated Deletions
  Author : Rakesh Kumar
  Date: 07/08/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    std::cout << "------------------------------------------------" << std::endl;
    for (int e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> odds;
    std::vector<int> evens;
    while (n--) {
        int e = 0;
        std::cin >> e;
        if ((e & 1) == 1)
            odds.emplace_back(e);
        else
            evens.emplace_back(e);
    }

    int r = 0;
    int size = odds.size() - evens.size();
    size = std::abs(size);
    if (size > 1) {
        std::sort(odds.begin(), odds.end());
        std::sort(evens.begin(), evens.end());

        if (odds.size() < evens.size()) {
            for (int i = 0; i < size - 1; ++i)
                r += evens[i];
        } else {
            for (int i = 0; i < size - 1; ++i)
                r += odds[i];
        }
    }
    std::cout << r << std::endl;

    return 0;
}
