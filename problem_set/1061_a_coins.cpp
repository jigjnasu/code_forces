/*
  Contest: 1061
  Problem A : Coins
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    int s = 0;
    std::cin >> n >> s;
    ll r = s / n;
    if (s % n != 0)
        ++r;
    std::cout << r << std::endl;

    return 0;
}
