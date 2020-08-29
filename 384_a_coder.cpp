/*
  Contest : 384
  Problem A : Coder
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    short n = 0;
    std::cin >> n;

    int r = 0;
    // odd number board
    if ((n & 1) == 1) {
        const int t = n >> 1;
        r = ((t + 1) * (t + 1)) + (t * t);
    } else { // even number board
        r = (n >> 1) * n;
    }

    std::cout << r << std::endl;

    for (short r = 0; r < n; ++r) {
        for (short c = 0; c < n; ++c) {
            const char t = ((r + c) & 1) == 1 ? '.' : 'C';
            std::cout << t;
        }
        std::cout << std::endl;
    }

    return 0;
}
