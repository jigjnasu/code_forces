/*
  Contest : 892
  Problem A : Greed
  Author : Rakesh Kumar
  Date: 18/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        ll v = 0;
        std::cin >> v;
        total += v;
    }

    ll a = 0;
    ll b = 0;
    while (n--) {
        ll v = 0;
        std::cin >> v;
        if (v > b) {
            a = b;
            b = v;
        } else if (v > a)
            a = v;
    }
    std::cout << ((total <= (a + b)) ? "YES" : "NO") << std::endl;

    return 0;
}
