/*
  Contest : 984
  Problem A : Game
  Author : Rakesh Kumar
  Date : 26/07/2020
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
    if ((v.size() & 1) == 1)
        std::cout << v[v.size() >> 1] << std::endl;
    else
        std::cout << v[(v.size() >> 1) - 1] << std::endl;

    return 0;
}
