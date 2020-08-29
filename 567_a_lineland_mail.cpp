/*
  Contest : 567
  Problem A : Lineland mail
  Author : Rakesh Kumar
  Date: 16/07/2020
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
        ll p = 0;
        std::cin >> p;
        v.emplace_back(p);
    }

    std::cout << std::abs(v[1] - v[0]) << " " << std::abs(v[v.size() - 1] - v[0]) << std::endl;
    for (std::size_t i = 1; i < v.size() - 1; ++i) {
        const ll min = std::min(std::abs(v[i + 1] - v[i]),
                                std::abs(v[i] - v[i - 1]));
        const ll max = std::max(std::abs(v[v.size() - 1] - v[i]),
                                std::abs(v[0] - v[i]));
        std::cout << min << " " << max << std::endl;
    }
    std::cout << std::abs(v[v.size() - 1] - v[v.size() - 2]) << " " << std::abs(v[v.size() - 1] - v[0]) << std::endl;

    return 0;
}
