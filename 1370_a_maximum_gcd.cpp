/*
  Contest : 1370
  Problem A : A. Maximum GCD
  Author : Rakesh Kumar
  Date: 04/03/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::cout << (n >> 1) << std::endl;
    }

    return 0;
}
