/*
  Contest : 124
  Problem A : The number of positions
  Author : Rakesh Kumar
  Date: 25/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, a = 0, b = 0;
    std::cin >> n >> a >> b;
    std::cout << std::min(n - a, b + 1) << std::endl;

    return 0;
}
