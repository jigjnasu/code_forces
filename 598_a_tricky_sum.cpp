/*
  Contest: 598
  Problem A : Tricky Sum
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    while (t--) {
        ll n = 0;
        std::cin >> n;
        const ll k = std::log2(n) + 1;
        const ll a = (n * (n + 1)) >> 1;
        const ll b = (std::pow(2, k) - 1) * 2;
        std::cout << a - b << std::endl;
    }

    return 0;
}
