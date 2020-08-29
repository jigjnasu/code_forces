/*
  Contest : 583
  Problem A : Asphalting roads
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<bool> row(n, false);
    std::vector<bool> col(n, false);

    for (int i = 1; i <= n * n; ++i) {
        int h = 0;
        int v = 0;
        std::cin >> h >> v;
        if (!row[h - 1] && !col[v - 1]) {
            std::cout << i << " ";
            row[h - 1] = col[v - 1] = true;
        }
    }
    std::cout << std::endl;

    return 0;
}
