/*
  Contest : 732
  Problem A : Buy a shovel
  Author : Rakesh Kumar
  Date: 23/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    int k = 0, r = 0;
    std::cin >> k >> r;
    int i = 1;
    while (1) {
        if (((k * i) % 10) == r ||
            ((k * i) % 10) == 0) {
            std::cout << i << std::endl;
            break;
        }
        ++i;
    }

    return 0;
}
