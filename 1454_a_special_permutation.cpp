/*
  Contest : 1454
  Problem A : Special Permutation
  Author : Rakesh Kumar
  Date: 31/01/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::cout << n << " ";
        for (int i = 1; i < n; ++i)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    return 0;
}

