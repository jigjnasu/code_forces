/*
  Contest : 1101
  Problem A : Minimum Integer
  Author : Rakesh Kumar
  Date: 01/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        int l = 0, r = 0, d = 0;
        std::cin >> l >> r >> d;
        if (d < l)
            std::cout << d << std::endl;
        else
            std::cout << ((r / d) + 1) * d << std::endl;
    }

    return 0;
}
