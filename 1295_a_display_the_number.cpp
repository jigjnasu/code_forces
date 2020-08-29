/*
  Contest : 1295
  Problem A : Display the number
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

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
