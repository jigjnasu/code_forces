/*
  Contest: 469
  Problem A : I wanna be the guy
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;

    std::set<int> s;
    int p = 0;
    std::cin >> p;
    while (p--) {
        int l = 0;
        std::cin >> l;
        if (l)
            s.insert(l);
    }

    int q = 0;
    std::cin >> q;
    while (q--) {
        int l = 0;
        std::cin >> l;
        if (l)
            s.insert(l);
    }

    const std::string r = n == s.size() ? "I become the guy." : "Oh, my keyboard!";
    std::cout << r << std::endl;

    return 0;
}
