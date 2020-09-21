/*
  Contest : 1148
  Problem A : Another One Bites The Dust
  Author : Rakesh Kumar
  Date: 22/09/2020
*/

#include <bits/stdc++.h>

using ll = long long;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    ll r = 2 * std::min(a, b) + 2 * c;
    if (a != b) ++r;
    std::cout << r << std::endl;

    return 0;
}
