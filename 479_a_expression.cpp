/*
  Contest : 479
  Problem A : Expression
  Author : Rakesh Kumar
  Date: 27/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    std::cout << std::max(std::max(a + b + c, a * b * c),
                          std::max((a + b) * c, a * (b + c)))
              << std::endl;

    return 0;
}
