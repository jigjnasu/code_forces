/*
  Contest: 950
  Problem A : Left-handers, Right-handers and Ambidexters
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int l = 0;
    int r = 0;
    int a = 0;
    std::cin >> l >> r >> a;
    if (l < r) {
        const int t = std::min(r - l, a);
        l += t;
        a -= t;
    }
    if (r < l) {
        const int t = std::min(l - r, a);
        r += t;
        a -= t;
    }
    std::cout << std::min(l + (a >> 1), r + (a >> 1)) * 2 << std::endl;
    return 0;
}
