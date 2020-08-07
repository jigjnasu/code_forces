/*
  Contest : 1313
  Problem A : Fast Food Restaurant
  Author : Rakesh Kumar
  Date: 08/08/2020
*/

#include <bits/stdc++.h>

inline int dishes(int a, int b, int c) {
    int r = 0;
    if (a) { ++r; --a; }
    if (b) { ++r; --b; }
    if (c) { ++r; --c; }
    if (a && b) { ++r; --a; --b; }
    if (a && c) { ++r; --a; --c; }
    if (b && c) { ++r; --b; --c; }
    if (a && b && c) { ++r; --a; --b; --c; }
    return r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int a = 0, b = 0, c = 0;
        std::cin >> a >> b >> c;
        int r = 0;
        r = std::max(r, dishes(a, b, c));
        r = std::max(r, dishes(a, c, b));
        r = std::max(r, dishes(b, a, c));
        r = std::max(r, dishes(b, c, a));
        r = std::max(r, dishes(c, a, b));
        r = std::max(r, dishes(c, b, a));
        std::cout << r << std::endl;
    }

    return 0;
}
