/*
  Contest : 1081
  Problem A :  Definite Game
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

bool is_prime(int n) {
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
    if (n == 2)
        std::cout << 2 << std::endl;
    else
        std::cout << 1 << std::endl;

    return 0;
}
