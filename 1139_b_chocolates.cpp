/*
  Contest: 1139
  Problem B : Chocolates
  Author : Rakesh Kumar
  Date: 14/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0;
    std::cin >> n;
    std::vector<ll> v;
    while (n--) {
        ll a = 0;
        std::cin >> a;
        v.emplace_back(a);
    }

    ll sum = 0;
    for (ll i = v.size() - 1; i > 0; --i) {
            sum += v[i];
            if (v[i] <= v[i - 1])
                v[i - 1] = std::max(static_cast<ll>(0), v[i] - 1);
    }
    sum += v[0];
    std::cout << sum << std::endl;

    return 0;
}
