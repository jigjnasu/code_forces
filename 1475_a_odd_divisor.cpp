/*
  Contest : 1475
  Problem A : Odd Divisor
  Author : Rakesh Kumar
  Date: 12/11/2021
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    
    ll t = 0;
    std::cin >> t;
    while (t--) {
        ll n = 0;
        std::cin >> n;
        if (n & 1) {
            std::cout << "YES" << std::endl;
        } else {
            if (n == 2)
                std::cout << "NO" << std::endl;
            else {
                ll t = n / 2;
                while (t != 2 && t % 2 == 0)
                    t /= 2;
                if (t == 2)
                    std::cout << "NO" << std::endl;
                else
                    std::cout << "YES" << std::endl;
            }
        }
    }

    return 0;
}