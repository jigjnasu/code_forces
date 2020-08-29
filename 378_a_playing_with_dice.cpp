/*
  Contest: 378
  Problem A : Playing with dice
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    short a = 0;
    short b = 0;
    std::cin >> a >> b;

    short x = 0;
    short d = 0;
    short y = 0;
    for (int n = 1; n <= 6; ++n) {
        const short xd = std::abs(a - n);
        const short yd = std::abs(b - n);
        if (xd == yd)
            ++d;
        else if (xd < yd)
            ++x;
        else
            ++y;
    }
    std::cout << x << " " << d << " " << y << std::endl;

    return 0;
}
