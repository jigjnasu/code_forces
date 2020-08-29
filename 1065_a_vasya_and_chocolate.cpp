/*
  Contest : 1065
  Problem A : Vasya and chocolate
  Author : Rakesh Kumar
  Date: 16/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        ll s = 0;
        ll a = 0;
        ll b = 0;
        ll c = 0;
        std::cin >> s >> a >> b >> c;
        std::cout << (s / c) + (((s / c) / a) * b) << std::endl;
    }

    return 0;
}
