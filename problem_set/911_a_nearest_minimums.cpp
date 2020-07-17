/*
  Contest : 911
  Problem A : Nearest Minimums
  Author : Rakesh Kumar
  Date: 18/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::map<ll, std::vector<ll>> dict;
    ll n = 0;
    std::cin >> n;
    for (ll i = 0; i < n; ++i) {
        ll m = 0;
        std::cin >> m;
        dict[m].emplace_back(i);
    }

    auto it = dict.begin();
    ll min = it->second[1] - it->second[0];
    for (std::size_t i = 2; i < it->second.size(); ++i)
        min = std::min(min, it->second[i] - it->second[i - 1]);
    std::cout << min << std::endl;


    return 0;
}
