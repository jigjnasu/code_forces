/*
  Contest : 577
  Problem A : Multiplication Table
  Author : Rakesh Kumar
  Date: 11/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, x = 0;
    std::cin >> n >> x;


    int div = 0;
    for (int i = 1; i <= n; ++i)
        if (x % i == 0 and x / i <=n)
            ++div;
    std::cout << div << std::endl;

    return 0;
}
