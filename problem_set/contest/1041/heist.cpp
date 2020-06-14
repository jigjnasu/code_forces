/*
  Contest: 1041
  Problem A : Heist
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    ll n = 0;
    std::cin >> n;

    ll x = n;

    ll min = 0;
    std::cin >> min;
    --n;

    ll max = min;

    while (n--) {
        ll k = 0;
        std::cin >> k;
        min = std::min(min, k);
        max = std::max(max, k);
    }

    std::cout << max - min + 1 - x << std::endl;

    return 0;
}
