/*
  Contest: 334
  Problem A : Candy bags
  Author : Rakesh Kumar
  Date: 10/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    std::cin >> n;

    int k = n * n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n >> 1; ++j) {
            std::cout << (n * j) + i << " " << (k - (n * j)) << " ";
        }
        std::cout << std::endl; --k;
    }
    return 0;
}
