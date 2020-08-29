/*
  Contest: 509
  Problem A : Maximum in table
  Author : Rakesh Kumar
  Date: 01/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<std::vector<int>> d(n, std::vector<int>(n, 1));
    for (int r = 1; r < n; ++r)
        for (int c = 1; c < n; ++c)
            d[r][c] = d[r - 1][c] + d[r][c - 1];
    std::cout << d[n - 1][n - 1] << std::endl;

    return 0;
}
