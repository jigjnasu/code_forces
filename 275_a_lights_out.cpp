/*
  Contest : 275
  Problem A : Lights Out
  Author : Rakesh Kumar
  Date: 22/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int grid[5][5] = {0};
    std::vector<std::vector<bool>> out = {{true, true, true, true, true},
                                          {true, true, true, true, true},
                                          {true, true, true, true, true},
                                          {true, true, true, true, true},
                                          {true, true, true, true, true}};
    for (int r = 1; r <= 3; ++r)
        for (int c = 1; c <= 3; ++c)
            std::cin >> grid[r][c];
    for (int r = 1; r <= 3; ++r) {
        for (int c = 1; c <= 3; ++c) {
            if (grid[r][c] & 1) {
                out[r][c]     = !out[r][c];
                out[r - 1][c] = !out[r - 1][c];
                out[r + 1][c] = !out[r + 1][c];
                out[r][c - 1] = !out[r][c - 1];
                out[r][c + 1] = !out[r][c + 1];
            }
        }
    }
    for (int r = 1; r <= 3; ++r) {
        for (int c = 1; c <= 3; ++c)
            std::cout << out[r][c];
        std::cout << std::endl;
    }

    return 0;
}
