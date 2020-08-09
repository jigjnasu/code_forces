/*
  Contest : 1016
  Problem A : Death Note
  Author : Rakesh Kumar
  Date: 10/08/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ull n = 0, m = 0;
    std::cin >> n >> m;
    std::vector<ull> v(n + 1, 0);
    for (ull i = 1; i <= n; ++i) {
        ull nm = 0;
        std::cin >> nm;
        v[i] = nm + v[i - 1];
    }

    std::cout << v[1] / m << " ";
    for (ull i = 2; i <= n; ++i)
        std::cout << v[i] / m - v[i - 1] / m << " ";
    std::cout << std::endl;

    return 0;
}
