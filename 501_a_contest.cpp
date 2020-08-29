/*
  Contest: 501
  Problem A : Contest
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

inline int points(int p, int t) {
    return std::max((3 * p) / 10, p - ((p / 250) * t));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a >> b >> c >> d;
    const int x = points(a, c);
    const int y = points(b, d);
    if (x == y)
        std::cout << "Tie" << std::endl;
    else if (x < y)
        std::cout << "Vasya" << std::endl;
    else
        std::cout << "Misha" << std::endl;

    return 0;
}
