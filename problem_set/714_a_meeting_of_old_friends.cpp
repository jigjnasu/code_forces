/*
  Contest : 714
  Problem A : Meeting of old friends
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

inline bool bound(ull p, ull l, ull r) {
    return p >= l && p <= r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    ull l1 = 0;
    ull r1 = 0;
    ull l2 = 0;
    ull r2 = 0;
    ull k  = 0;
    std::cin >> l1 >> r1 >> l2 >> r2 >> k;

    ull t = 0;
    ull l = 0;
    ull r = 0;
    if (bound(l2, l1, r1) ||
        bound(r2, l1, r1) ||
        bound(l1, l2, r2) ||
        bound(r1, l2, r2)) {
        l = std::max(l1, l2);
        r = std::min(r1, r2);
        t = r - l + 1;
        if (bound(k, l, r))
            --t;
    }
    std::cout << t << std::endl;

    return 0;
}
