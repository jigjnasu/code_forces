/*
  Contest : 1175
  Problem A : From hero to zero
  Author : Rakesh Kumar
  Date : 26/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

inline ll steps(ll n, ll k) {
    ll s = 0;
    while (n) {
        const ll r = n % k;
        if (r) {
            s += r; n -= r;
        } else {
            s++; n /= k;
        }
    }
    return s;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;

    while (t--) {
        ll n = 0, k = 0;
        std::cin >> n >> k;
        std::cout << steps(n, k) << std::endl;
    }

    return 0;
}
