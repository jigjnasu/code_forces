/*
  Contest : 1350
  Problem A : Orac and Factors
  Author : Rakesh Kumar
  Date: 28/08/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

ull f(ull n) {
    for (ull i = 2; i <= (n >> 1); ++i)
        if (n % i == 0)
            return i;
    return n;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        ull n = 0, k = 0;
        std::cin >> n >> k;
        std::cout << ((f(n) + n) + ((k - 1) << 1)) << std::endl;
    }

    return 0;
}
