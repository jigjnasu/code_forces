/*
  Contest: 1304
  Problem A : Two Rabbits
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    while (t--) {
        ll x = 0;
        ll y = 0;
        ll a = 0;
        ll b = 0;
        std::cin >> x >> y >> a >> b;

        const double p = (y - x) / static_cast<double>(a + b);
        ll r = -1;
        if (std::floor(p) == p)
            r = static_cast<ll>(p);
        std::cout << r << std::endl;
    }

    return 0;
}
