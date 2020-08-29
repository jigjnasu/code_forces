/*
  Contest : 80
  Problem A : Panoramix's Prediction
  Author : Rakesh Kumar
  Date: 18/07/2020
*/

#include <bits/stdc++.h>

inline bool prime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    while (!prime(++n));
    std::cout << (n == m ? "YES" : "NO") << std::endl;

    return 0;
}
