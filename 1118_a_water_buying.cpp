/*
  Contest : 1118
  Problem A : Water buying
  Author : Rakesh Kumar
  Date: 25/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        ll n = 0;
        int a = 0, b = 0;
        std::cin >> n >> a >> b;
        ll p = (n >> 1) * b;
        if (n & 1 == 1)
            p += a;
        std::cout << std::min(a * n, p) << std::endl;
    }

    return 0;
}
