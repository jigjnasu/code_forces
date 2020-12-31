/*
  Contest: 515
  Problem A : Drazil and Date
  Author : Rakesh Kumar
  Date: 01/01/2021
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    a = std::abs(a);
    b = std::abs(b);
    if (c >= a + b && !((c - a + b) & 1))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
