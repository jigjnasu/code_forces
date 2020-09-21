/*
  Contest : 1141
  Problem B : Maximal Continuous Rest
  Author : Rakesh Kumar
  Date: 21/09/2020
*/

#include <bits/stdc++.h>

inline int cross(const std::vector<int>& v) {
    std::size_t i = 0;
    while (v[i]) ++i;
    int j = v.size() - 1;
    while (v[j]) --j;
    return std::min(v.size(), i + v.size() - 1 - j);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int count = 0;
    int max = 0;
    std::vector<int> v;
    while (n--) {
        int h = 0;
        std::cin >> h;
        v.emplace_back(h);
        if (h) ++count;
        else {
            max = std::max(count, max);
            count = 0;
        }
    }
    max = std::max(max, count);
    std::cout << std::max(max, cross(v)) << std::endl;

    return 0;
}
