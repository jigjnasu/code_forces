/*
  Contest: 230
  Problem A : Dragons
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<std::tuple<int, int>>& v) {
    std::cout << "--------------------------------------------------------" << std::endl;
    for (const std::tuple<int, int>& t : v)
        std::cout << std::get<0>(t) << " | " << std::get<1>(t) << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int s = 0;
    int n = 0;
    std::cin >> s >> n;

    std::vector<std::tuple<int, int>> v;
    while (n--) {
        int x = 0;
        int y = 0;
        std::cin >> x >> y;
        v.emplace_back(std::make_tuple(x, y));
    }
    std::sort(v.begin(), v.end(), [](const std::tuple<int, int>& a, const std::tuple<int, int>& b) {
                                      return std::get<0>(a) < std::get<0>(b);
                                  });
    std::string r = "YES";
    for (const std::tuple<int, int>& t : v) {
        if (s <= std::get<0>(t)) {
            r = "NO";
            break;
        }
        s += std::get<1>(t);
    }

    std::cout << r << std::endl;

    return 0;
}
