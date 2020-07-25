/*
  Contest : 1176
  Problem A : Divide it!
  Author : Rakesh Kumar
  Date: 25/07/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int divide(ull n) {
    ull count = 0;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else if (n % 3 == 0)
            n = (2 * n) / 3;
        else if (n % 5 == 0)
            n = (4 * n) / 5;
        else
            return -1;
        ++count;
    }
    return count;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        ull n = 0;
        std::cin >> n;
        std::cout << divide(n) << std::endl;
    }

    return 0;
}
