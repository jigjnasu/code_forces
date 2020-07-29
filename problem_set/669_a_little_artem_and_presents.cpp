/*
  Contest : 900
  Problem A : Find extra one
  Author : Rakesh Kumar
  Date: 29/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int r = (n / 3) << 1;
    if (n % 3)
        ++r;
    std::cout << r << std::endl;

    return 0;
}
