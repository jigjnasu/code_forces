/*
  Contest: 474
  Problem B : Worms
  Author : Rakesh Kumar
  Date: 17/06/2020
*/

#include <bits/stdc++.h>

int pos(const std::vector<int>& d, int p, int s, int e) {
    while (1) {
        if (s == e)
            return s + 1;
        const int m = (s + e) >> 1;
        if (p <= d[m])
            e = m;
        if (p > d[m])
            s = m + 1;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int n = 0;
    std::cin >> n;

    std::vector<int> d(n, 0);
    int w = 0;
    std::cin >> w;
    d[0] = w;

    for (int i = 1; i < n; ++i) {
        w = 0;
        std::cin >> w;
        d[i] = w + d[i - 1];
    }

    int m = 0;
    std::cin >> m;
    while (m--) {
        int p = 0;
        std::cin >> p;
        std::cout << pos(d, p, 0, static_cast<int>(d.size()) - 1) << std::endl;
    }

    return 0;
}
