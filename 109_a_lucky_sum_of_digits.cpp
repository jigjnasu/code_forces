/*
  Contest : 109
  Problem A : Lucky sum of digits
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    ll n = 0;
    std::cin >> n;

    int four = (n / 4) + 1;
    int seven = (n / 7) + 1;
    int s = seven;
    for (int f = 0; f <= four; ++f) {
        while (s >= 0 &&  (4 * f + 7 * s) > n)
            --s;
        if ((4 * f + 7 * s) == n) {
            for (int i = 0; i < f; ++i)
                std::cout << "4";
            for (int i = 0; i < s; ++i)
                std::cout << "7";
            std::cout << std::endl;
            return 0;
        }
    }

    std::cout << "-1" << std::endl;
    return 0;
}
