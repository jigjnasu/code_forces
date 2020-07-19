/*
  Contest : 1295
  Problem A : Display the number
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

inline char f(int n) {
    if (n == 2)
        return '1';
    if (n == 3)
        return '7';
    if (n & 1 == 1)
        return f(n - 3) + f(n - 2);
    else
        return f(n - 2) + f(n - 2);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::string r;
        if (n & 1 == 1) {
            r = '7';
            n -= 3;
        }
        const std::string temp((n >> 1), '1');
        std::cout << r + temp << std::endl;
    }

    return 0;
}
