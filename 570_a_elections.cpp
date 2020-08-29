/*
  Contest : 570
  Problem A : Elections
  Author : Rakesh Kumar
  Date: 01/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    std::vector<int> neta_ji_city_walley(n + 1, 0);
    while (m--) {
        int w = 1;
        int v = 0, mv = 0;
        std::cin >> v;
        mv = v;
        for (int i = 2; i <= n; ++i) {
            std::cin >> v;
            if (v > mv) {
                mv = v;
                w = i;
            }
        }
        ++neta_ji_city_walley[w];
    }

    int w = 1;
    int c = neta_ji_city_walley[1];
    for (std::size_t i = 2; i < neta_ji_city_walley.size(); ++i) {
        if (neta_ji_city_walley[i] > c) {
            w = i;
            c = neta_ji_city_walley[i];
        }
    }
    std::cout << w << std::endl;

    return 0;
}
