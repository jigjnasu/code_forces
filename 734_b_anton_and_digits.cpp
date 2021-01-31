/*
  Contest : 734
  Problem B : Anton and Digits
  Author : Rakesh Kumar
  Date: 01/02/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
    const int c1 = std::min(std::min(a, c), d);
    a -= c1; c -= c1; d -= c1;
    const int c2 = std::min(a, b);
    std::cout << (c1 * 256) + (c2 * 32) << std::endl;

    return 0;
}
