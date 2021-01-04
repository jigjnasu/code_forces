/*
  Contest : 144
  Problem A : Arrival of the General
  Author : Rakesh Kumar
  Date: 01/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int min_h = 101, min_p = 0;
    int max_h = 0, max_p = 0;
    for (int i = 1; i <= n; ++i) {
        int h = 0;
        std::cin >> h;
        if (h <= min_h) {
            min_h = h;
            min_p = i;
        }

        if (h > max_h) {
            max_h = h;
            max_p = i;
        }
    }

    int dist = max_p - 1 + (n - min_p);
    if (min_p < max_p)
        --dist;
    std::cout << dist << std::endl;

    return 0;
}
