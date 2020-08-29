/*
  Contest: 552
  Problem B : Vanya and books
  Author : Rakesh Kumar
  Date: 09/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    ll n = 0;
    std::cin >> n;

    ll digits = 0;
    while (n) {
        const ll count = std::to_string(n).size();
        const ll start = std::pow(10, count - 1);
        digits += ((n - start) + 1) * count;
        n = start - 1;
    }
    std::cout << digits << std::endl;

    return 0;
}
