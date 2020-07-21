/*
  Contest : 903
  Problem A : Hungry student problem
  Author : Rakesh Kumar
  Date: 22/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    while (n--) {
        int x = 0;
        std::cin >> x;

        if (x % 3 == 0 ||
            x % 7 == 0) {
            std::cout << "YES" << std::endl;
        } else {
            // 3x = 100, means x = 100 / 3 -> 34
            bool found = false;
            for (int i = 0; i < 34; ++i) {
                const int temp  = x - (3 * i);
                if (temp <= 0)
                    break;
                if (temp % 7 == 0) {
                    std::cout << "YES" << std::endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
