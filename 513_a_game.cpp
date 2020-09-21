/*
  Contest : 513
  Problem A : Game
  Author : Rakesh Kumar
  Date: 21/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n1 = 0, k1 = 0, n2 = 0, k2 = 0;
    std::cin >> n1 >> n2 >> k1 >> k2;
    std::cout << (n1 > n2 ? "First" : "Second") << std::endl;

    return 0;
}
