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

    if ((std::min(n, m) & 1) == 1)
        std::cout << "Akshat" << std::endl;
    else
        std::cout << "Malvika" << std::endl;

    return 0;
}
