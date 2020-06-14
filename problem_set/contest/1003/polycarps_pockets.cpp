/*
  Contest : 1003
  Problem A : Polycrap's pockets
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;

    std::unordered_map<short, short> c;

    while (n--) {
        int d = 0;
        std::cin >> d;
        ++c[d];
    }

    short r = 0;
    for (auto it = c.begin(); it != c.end(); ++it)
        r = std::max(r, it->second);

    std::cout << r << std::endl;

    return 0;
}
