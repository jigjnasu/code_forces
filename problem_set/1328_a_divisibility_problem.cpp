/*
  Contest : 1328
  Problem A : Divisibility problem
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll t = 0;
    std::cin >> t;
    while (t--) {
        ll a = 0, b = 0;
        std::cin >> a >> b;
        if (a % b) {
            const ll t = a / b;
            const ll n = (t + 1) * b;
            std::cout << n - a << std::endl;
        } else {
            std::cout << "0" << std::endl;
        }
    }

    return 0;
}
