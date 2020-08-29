/*
  Contest : 439
  Problem A : Devu, the Singer and Churu, the Joker
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;

    int total = 0;
    for (int i = 0; i < n; ++i) {
        int t = 0;
        std::cin >> t;
        total += t;
    }

    total += (n - 1) * 10;
    if (total <= m)
        std::cout << ((n - 1) << 1) + ((m - total) / 5) << std::endl;
    else
        std::cout << "-1" << std::endl;
    return 0;
}
