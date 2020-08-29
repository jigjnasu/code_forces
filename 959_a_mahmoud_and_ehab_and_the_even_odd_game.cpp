/*
  Contest: 959
  Problem A : Mahmoud and ehab and the even-odd game
  Author : Rakesh Kumar
  Date: 17/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    ll n = 0;
    std::cin >> n;

    printf("%s\n", ((n & 1) == 1) ? "Ehab" : "Mahmoud");
    return 0;
}
