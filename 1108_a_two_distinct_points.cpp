/*
  Contest : 1108
  Problem A : Two distict points
  Author : Rakesh Kumar
  Date : 26/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        ll l1 = 0, r1 = 0, l2 = 0, r2 = 0;
        std::cin >> l1 >> r1 >> l2 >> r2;
        if (l1 != r2)
            std::cout << l1 << " " << r2 << std::endl;
        else if (r1 != l2)
            std::cout << r1 << " " << l2 << std::endl;
    }

    return 0;
}
