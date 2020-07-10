/*
  Contest: 1015
  Problem C : Songs compression
  Author : Rakesh Kumar
  Date: 10/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    ll n = 0;
    ll m = 0;
    std::cin >> n >> m;

    std::vector<ll> compressed;
    ll total = 0;
    while (n--) {
        ll a = 0;
        ll b = 0;
        std::cin >> a >> b;
        total += a;
        compressed.emplace_back(a - b);
    }

    std::sort(compressed.begin(), compressed.end());

    int j = compressed.size() - 1;
    while (j >= 0 && total > m) {
        total -= compressed[j];
        --j;
    }

    if (j >= compressed.size() && total > m)
        std::cout << -1 << std::endl;
    else
        std::cout << compressed.size() - j - 1 << std::endl;
    return 0;
}
