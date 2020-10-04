/*
  Contest : 1426
  Problem A : Floor Number
  Author : Rakesh Kumar
  Date: 04/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        int n = 0, x = 0;
        std::cin >> n >> x;
        if (n <= 2)
            std::cout << 1 << std::endl;
        else
            std::cout << std::ceil((n - 2) / static_cast<double>(x)) + 1 << std::endl;
    }

    return 0;
}
