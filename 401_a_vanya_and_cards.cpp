/*
  Contest: 401
  Problem A : Vanya and cards
  Author : Rakesh Kumar
  Date: 09/07/2020
*/

#include <bits/stdc++.h>

inline int cards(int d, int x) {
    int c = 0;
    while (d > 0 && x > 0) {
        while (d >= x) {
            ++c; d -= x;
        }
        --x;
    }
    return c;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    int x = 0;
    std::cin >> n >> x;

    int diff = 0;
    while (n--) {
        int c = 0;
        std::cin >> c;
        diff += c;
    }
    std::cout << cards(std::abs(diff), x) << std::endl;

    return 0;
}
