/*
  Contest: 499
  Problem A : Watching a movie
  Author : Rakesh Kumar
  Date: 30/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, x = 0;
    std::cin >> n >> x;
    std::vector<std::tuple<int, int>> v;
    while (n--) {
        int l = 0, r = 0;
        std::cin >> l >> r;
        v.emplace_back(std::make_pair(l, r));
    }

    int total_time_waste = 0;
    int i = 1;
    for (const std::tuple<int, int>& t : v) {
        while (i + x <= std::get<0>(t))
            i += x;
        total_time_waste += std::get<1>(t) - i + 1;
        i = std::get<1>(t) + 1;
    }
    std::cout << total_time_waste << std::endl;

    return 0;
}
