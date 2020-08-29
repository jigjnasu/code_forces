/*
  Contest : 459
  Problem A : Pashmak and Garden
  Author : Rakesh Kumar
  Date: 18/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
        const int side = std::abs(y1 - y2);
        x3 = x1 + side; y3 = y1;
        x4 = x1 + side; y4 = y2;
    } else if (y1 == y2) {
        const int side = std::abs(x1 - x2);
        x3 = x1; y3 = y1 + side;
        x4 = x2; y4 = y1 + side;
    } else {
        const int xside = std::abs(x1 - x2);
        const int yside = std::abs(y1 - y2);
        if (xside != yside) {
            std::cout << "-1" << std::endl;
            return 0;
        }
        x3 = x1; y3 = y2;
        x4 = x2; y4 = y1;
    }
    std::cout << x3 << " " << y3 << " " << x4 << " " << y4 << std::endl;

    return 0;
}
