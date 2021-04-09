/*
  Contest : 155
  Problem A : Arena
  Author : Rakesh Kumar
  Date: 10/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int r = 0, e = 0;
    std::cin >> e;
    int min_r = e, max_r = e;
    for (int i = 1; i < n; ++i) {
        std::cin >> e;
        if (e > max_r) {
            max_r = e;
            ++r;
        }
        if (e < min_r) {
            min_r = e;
            ++r;
        }
    }
    std::cout << r << std::endl;

    return 0;
}
