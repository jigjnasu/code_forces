/*
  Contest : 1095
  Problem B : Array Stabilization
  Author : Rakesh Kumar
  Date: 08/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    while (n--) {
        int e = 0;
        std::cin >> e;
        v.emplace_back(e);
    }
    std::sort(v.begin(), v.end());
    std::cout << std::min(v[v.size() - 2] - v[0], v[v.size() - 1] - v[1]) << std::endl;

    return 0;
}
