/*
  Contest : 276
  Problem A : Lunch rush
  Author : Rakesh Kumar
  Date: 05/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    ll n = 0;
    ll k = 0;
    std::cin >> n >> k;

    ll f = 0;
    ll t = 0;
    std::cin >> f >> t; --n;
    ll joy = t > k ? f - (t - k) : f;
    while (n--) {
        std::cin >> f >> t;
        joy = std::max(joy, t > k ? f - (t - k) : f);
    }
    std::cout << joy << std::endl;

    return 0;
}
