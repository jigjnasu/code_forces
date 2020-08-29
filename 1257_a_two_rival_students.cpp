/*
  Contest: 1257
  Problem A: Two rival students
  Author : Rakesh Kumar
  Date: 29/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.ignore(0);
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        int x = 0;
        int a = 0;
        int b = 0;
        std::cin >> n >> x >> a >> b;

        int p = std::min(a, b);
        int q = std::max(a, b);
        if (q < n) {
            const int temp = std::min(x, n - q);
            q += temp;
            x -= temp;
        }

        if (p > 1) {
            const int temp = std::min(x, p - 1);
            p -= temp;
        }
        std::cout << q - p << std::endl;
    }

    return 0;
}
