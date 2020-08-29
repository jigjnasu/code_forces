/*
  Contest : 609
  Problem A : USB Flash Drives
  Author : Rakesh Kumar
  Date: 17/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0;
    std::cin >> x;
    if (x == 1)
        std::cout << -1 << std::endl;
    else
        std::cout << x << " " << x << std::endl;

    return 0;
}
