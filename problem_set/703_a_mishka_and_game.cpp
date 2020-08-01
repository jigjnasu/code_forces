/*
  Contest: 703
  Problem A : Mishka and Game
  Author : Rakesh Kumar
  Date: 31/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int m = 0, c = 0;
    while (n--) {
        int sm = 0, sc = 0;
        std::cin >> sm >> sc;
        if (sm > sc) ++m;
        if (sc > sm) ++c;
    }

    if (m > c)
        std::cout << "Mishka" << std::endl;
    else if (m < c)
        std::cout << "Chris" << std::endl;
    else
        std::cout << "Friendship is magic!^^" << std::endl;

    return 0;
}
