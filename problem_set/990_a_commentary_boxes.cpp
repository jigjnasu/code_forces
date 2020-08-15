/*
  Contest : 937
  Problem A : Olympiad
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ull n = 0, m = 0;
    int a = 0, b = 0;
    std::cin >> n >> m >> a >> b;
    if (n % m == 0) {
        std::cout << 0 << std::endl;
    } else {
        const ull rem = n % m;
        std::cout << std::min(a * (m - rem), b * rem) << std::endl;
    }

    return 0;
}
