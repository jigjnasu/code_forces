/*
  Contest : 237
  Problem A : Free cash
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int ph = 0, pm = 0;
    std::cin >> ph >> pm; --n;

    int cash = 1;
    int max_cash = 1;
    while (n--) {
        int hh = 0, mm = 0;
        std::cin >> hh >> mm;
        if (hh == ph && mm == pm) {
            ++cash;
        } else {
            max_cash = std::max(cash, max_cash);
            cash = 1;
        }
        ph = hh; pm = mm;
    }
    max_cash = std::max(cash, max_cash);
    std::cout << max_cash << std::endl;

    return 0;
}
