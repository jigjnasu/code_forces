/*
  Contest : 472
  Problem A : Design Tutorial: Learn from Math
  Author : Rakesh Kumar
  Date: 14/11/2021
*/

#include <bits/stdc++.h>

inline bool is_prime(const int& n) {
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int a = n >> 1;
    int b = n >> 1;
    if (n & 1)
        ++a;

    while (is_prime(a) || is_prime(b)) {
        --a; ++b;
    }
    std::cout << a << " " << b << std::endl;

    return 0;
}