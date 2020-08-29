/*
  Contest 1316
  Problem A : Grade allocation
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int t = 0;
    std::cin >> t;

    while (t--) {
        int n = 0;
        int m = 0;
        std::cin >> n >> m;

        int f = 0;
        std::cin >> f;
        --n;

        while (n--) {
            int s = 0;
            std::cin >> s;
            if (s + f <= m)
                f += s;
            else
                f += m - f;
        }

        std::cout << f << std::endl;
    }

    return 0;
}
