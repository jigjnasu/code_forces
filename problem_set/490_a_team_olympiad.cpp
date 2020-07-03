/*
  Contest: 490
  Problem A : Team olympiad
  Author : Rakesh Kumar
  Date: 17/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;

    std::unordered_map<short, std::vector<short>> d;
    for (int i = 1; i <= n; ++i) {
        short s = 0;
        std::cin >> s;
        d[s].push_back(i);
    }

    const int c = std::min(std::min(d[1].size(), d[2].size()), d[3].size());
    std::cout << c << std::endl;
    for (int i = 0; i < c; ++i)
        printf("%d %d %d\n", d[1][i], d[2][i], d[3][i]);

    return 0;
}
