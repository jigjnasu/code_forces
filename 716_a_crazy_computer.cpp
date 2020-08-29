/*
  Contest : 716
  Problem A : Crazy computer
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    ll n = 0;
    ll c = 0;
    std::cin >> n >> c;

    ll t = 1;
    ll p = 0;
    std::cin >> p; --n;

    while (n--) {
        ll s = 0;
        std::cin >> s;

        if (s - p > c)
            t = 1;
        else
            ++t;
        p = s;
    }

    std::cout << t << std::endl;

    return 0;
}
