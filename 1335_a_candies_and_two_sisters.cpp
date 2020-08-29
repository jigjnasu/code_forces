/*
  Contest: 1335
  Problem A : Candies and Two Sisters
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    ll t = 0;
    scanf("%lld", &t);

    while (t--) {
        ll n = 0;
        scanf("%lld", &n);
        ll r = 0;
        r = std::ceil(n / static_cast<double>(2)) - 1;
        printf("%lld\n", r);
    }

    return 0;
}
