/*
  Contest : 1359
  Problem A : A. Berland Poker
  Author : Rakesh Kumar
  Date: 01/03/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, m = 0, k = 0;
        std::cin >> n >> m >> k;
        const int max_points = std::min(m, n / k);
        const int min_points = ((m - max_points) + (k - 2)) / (k - 1);
        std::cout << max_points - min_points << std::endl;
    }

    return 0;
}
