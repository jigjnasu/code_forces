/*
  Contest: 148
  Problem A : Insomnia cure
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int d = 0;
    std::cin >> k >> l >> m >> n >> d;

    int c = 0;
    if (k == 1 || l == 1 || m == 1 || n == 1) {
        c = d;
    } else {
        for (int i = 1; i <=d; ++i)
            if (i % k == 0 ||
                i % l == 0 ||
                i % m == 0 ||
                i % n == 0)
                ++c;
    }

    std::cout << c << std::endl;

    return 0;
}
