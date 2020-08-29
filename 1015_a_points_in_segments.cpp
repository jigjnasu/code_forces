/*
  Contest: 1015
  Problem A : Points in segments
  Author : Rakesh Kumar
  Date: 09/07/2020
*/

#include <bits/stdc++.h>

inline bool exists(const std::vector<std::pair<int, int>>& segs, int p) {
    for (const std::pair<int, int>& s : segs)
        if (p >= s.first && p <= s.second)
            return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    std::vector<std::pair<int, int>> segs;
    while (n--) {
        int l = 0;
        int r = 0;
        std::cin >> l >> r;
        segs.emplace_back(std::make_pair(l, r));
    }

    std::vector<int> points;
    for (int i = 1; i <= m; ++i) {
        if (!exists(segs, i))
            points.emplace_back(i);
    }

    std::cout << points.size() << std::endl;
    for (int p : points)
        std::cout << p << " ";
    std::cout << std::endl;

    return 0;
}
