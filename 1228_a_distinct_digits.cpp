/*
  Contest : 1228
  Problem A : Disticnt Digits
  Author : Rakesh Kumar
  Date: 05/07/2020
*/

#include <bits/stdc++.h>

inline bool distinct(const std::string& n) {
    std::unordered_set<char> m;
    for (char c : n)
        m.insert(c);
    return n.size() == m.size();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int l = 0;
    int r = 0;
    std::cin >> l >> r;

    int x = l;
    while (x <= r) {
        if (distinct(std::to_string(x)))
            break;
        ++x;
    }

    if (x > r)
        std::cout << -1 << std::endl;
    else
        std::cout << x << std::endl;

    return 0;
}
