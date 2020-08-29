/*
  Contest : 1047
  Problem B : Cover Points
  Author : Rakesh Kumar
  Date: 17/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    ll n = 0;
    std::cin >> n;
    ll m = 0;
    while (n--) {
        ll x = 0;
        ll y = 0;
        std::cin >> x >> y;
        m = std::max(x + y, m);
    }
    std::cout << m << std::endl;

    return 0;
}
