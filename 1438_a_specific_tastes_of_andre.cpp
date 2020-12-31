/*
  Contest: 1438
  Problem A : Specific Tastes of Andre
  Author : Rakesh Kumar
  Date: 01/01/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int e = 0;
        std::cin >> e;
        for (int i = 0; i < e; ++i)
            std::cout << 3 << " ";
        std::cout << std::endl;
    }

    return 0;
}

