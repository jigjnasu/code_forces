/*
  Contest: 1236
  Problem A : Stones
  Author : Rakesh Kumar
  Date: 01/01/2021
*/

#include <bits/stdc++.h>

using ll = long long int;

inline int count(int& x, int& y) {
    int c = 0;
    while (x >= 1 && y >= 2) {
        ++c;
        --x; y -= 2;
    }
    return c;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int a = 0, b = 0, c = 0;
        std::cin >> a >> b >> c;
        int cc = count(b, c);
        cc += count(a, b);
        std::cout << cc * 3 << std::endl;
    }

    return 0;
}
