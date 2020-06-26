/*
  Contest: 451
  Problem A : Game with sticks
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    int m = 0;
    std::cin >> n >> m;

    int i = 0;
    while (1) {
        if (n >= 1 && m >= 1) {
            --n; --m;
        } else {
            if ((i & 1) == 0)
                std::cout << "Malvika" << std::endl;
            else
                std::cout << "Akshat" << std::endl;
            return 0;
        }
        ++i;
    }

    return 0;
}
