/*
  Contest: 1327
  Problem A : Sum of odd integers
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.ignore(0);
    ll t = 0;
    std::cin >> t;

    while (t--) {
        ll n = 0;
        ll k = 0;
        std::cin >> n >> k;
        std::string r = "NO";
        if ((n & 1) == (k & 1)) {
            if (k * k <= n)
                r = "YES";
        }
        std::cout << r << std::endl;
    }

    return 0;
}
