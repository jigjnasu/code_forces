/*
  Contest : 1183
  Problem B : Equalize Prices
  Author : Rakesh Kumar
  Date: 10/10/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        int n = 0, k = 0;
        std::cin >> n >> k;
        ll min = 0;
        std::cin >> min; --n;
        std::vector<ll> v;
        v.emplace_back(min);
        while (n--) {
            ll e = 0;
            std::cin >> e;
            min = std::min(e, min);
            v.emplace_back(e);
        }
        ll r = min + k;
        for (int e : v) {
            if (std::abs(r - e) > k) {
                r = -1;
                break;
            }
        }
        std::cout << r << std::endl;
    }

    return 0;
}
