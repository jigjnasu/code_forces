/*
  Contest: 34
  Problem B : Sale
  Author : Rakesh Kumar
  Date: 22/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    std::vector<int> v;

    while (n--) {
        int cost = 0;
        std::cin >> cost;
        v.push_back(cost);
    }

    std::sort(v.begin(), v.end());
    int money = 0;
    for (int i = 0; i < m; ++i) {
        if (v[i] < 0)
            money += (-1 * v[i]);
    }

    std::cout << money << std::endl;

    return 0;
}
