/*
  Contest: 469
  Problem A : I wanna be the guy
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.ignore(0);
    int n = 0;
    std::cin >> n;

    std::vector<std::tuple<int, int>> v;
    for (int i = 1; i <= n; ++i) {
        int e = 0;
        std::cin >> e;
        v.emplace_back(std::make_tuple((e & 1), i));
    }

    std::sort(v.begin(), v.end(), [](const std::tuple<int, int>& a,
                                     const std::tuple<int, int>& b) {
                                      return std::get<0>(a) < std::get<0>(b);
                                  });

    if (std::get<0>(v[0]) != std::get<0>(v[1]))
        std::cout << std::get<1>(v[0]) << std::endl;
    else
        std::cout << std::get<1>(v[n - 1]) << std::endl;

    return 0;
}
