/*
  Contest : 268
  Problem A : Games
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<std::pair<int, int>> v;
    while (n--) {
        int h = 0, a = 0;
        std::cin >> h >> a;
        v.emplace_back(std::make_pair(h, a));
    }

    int dispute = 0;
    for (std::size_t i = 0; i < v.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < v.size(); ++j) {
            if (v[i].first == v[j].second) ++dispute;
            if (v[j].first == v[i].second) ++dispute;
        }
    }
    std::cout << dispute << std::endl;

    return 0;
}
