/*
  Contest : 318
  Problem A : Even odds
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, k = 0;
    std::cin >> n >> k;

    const ll odds = std::ceil(n / static_cast<double>(2));
    const ll evens = n - odds;
    if (k <= odds)
        std::cout << ((k - 1) << 1) + 1 << std::endl;
    else
        std::cout << ((k - odds) << 1) << std::endl;

    return 0;
}
