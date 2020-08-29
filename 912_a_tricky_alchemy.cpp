/*
  Contest: 912
  Problem A : Tricky alachemy
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    ll A = 0;
    ll B = 0;
    std::cin >> A >> B;

    ll x = 0;
    ll y = 0;
    ll z = 0;
    std::cin >> x >> y >> z;

    ll add = 0;
    if (A < ((x << 1) + y))
        add += ((x << 1) + y) - A;
    if (B < (z * 3) + y)
        add += ((z * 3) + y) - B;
    std::cout << add << std::endl;

    return 0;
}
