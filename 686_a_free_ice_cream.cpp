/*
  Contest: 686
  Problem A : Free ice cream
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    ll n = 0;
    ll x = 0;
    std::cin >> n >> x;

    ll d = 0;
    while (n--) {
        char c = ' ';
        ll p = 0;
        std::cin >> c >> p;

        if (c == '+') {
            x += p;
        } else {
            if (p <= x)
                x -= p;
            else
                ++d;
        }
    }
    std::cout << x << " " << d << std::endl;

    return 0;
}
