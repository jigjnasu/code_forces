/*
  Contest: 1256
  Problem A: Payment without change
  Author : Rakesh Kumar
  Date: 29/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int q = 0;
    std::cin >> q;

    while (q--) {
        ll a = 0;
        ll b = 0;
        ll n = 0;
        ll S = 0;
        std::cin >> a >> b >> n >> S;

        const ll s = (std::min(S / n, a) * n) + b;
        const std::string r = s < S ? "NO" : "YES";
        std::cout << r << std::endl;
    }

    return 0;
}
