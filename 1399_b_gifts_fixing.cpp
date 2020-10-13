/*
  Contest : 1399
  Problem B : Gifts Fixing
  Author : Rakesh Kumar
  Date: 14/10/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        ll cmin = (1e+9) + 1;
        std::vector<ll> c;
        for (ll i = 0; i < n; ++i) {
            ll f = 0;
            std::cin >> f;
            cmin = std::min(f, cmin);
            c.emplace_back(f);
        }
        ll omin = (1e+9) + 1;
        std::vector<ll> o;
        for (ll i = 0; i < n; ++i) {
            ll f = 0;
            std::cin >> f;
            omin = std::min(f, omin);
            o.emplace_back(f);
        }

        ll total = 0;
        for (std::size_t i = 0; i < c.size(); ++i)
            total += std::max(std::abs(cmin - c[i]), std::abs(omin - o[i]));
        std::cout << total << std::endl;
    }

    return 0;
}
