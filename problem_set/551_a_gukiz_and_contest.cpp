/*
  Contest : 551
  Problem A : GukiZ and Contest
  Author : Rakesh Kumar
  Date: 17/07/2020
*/

#include <bits/stdc++.h>

inline void print(const std::map<int, int>& m) {
    for (auto it = m.rbegin(); it != m.rend(); ++it)
        std::cout << it->first << " | " << it->second << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::map<int, int> volume;
    std::vector<int> vec;
    while (n--) {
        int e = 0;
        std::cin >> e;
        ++volume[e];
        vec.emplace_back(e);
    }

    std::unordered_map<int, int> pos;
    auto it = volume.rbegin();
    int p = it->second;
    pos[it->first] = 1; ++it;
    while (it != volume.rend()) {
        pos[it->first] = p + 1;
        p += it->second;
        ++it;
    }

    for (int e : vec)
        std::cout << pos[e] << " ";
    std::cout << std::endl;

    return 0;
}
