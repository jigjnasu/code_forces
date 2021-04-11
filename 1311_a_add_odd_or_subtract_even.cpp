/*
  Contest : 1311
  Problem A : Add Odd or Subtract Even
  Author : Rakesh Kumar
  Date: 11/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        int r = 0;
        if (a < b) {
            if ((b - a) & 1)
                r = 1;
            else
                r = 2;
        } else if (a > b) {
            if (((a - b) & 1) == 0)
                r = 1;
            else
                r = 2;
        }
        std::cout << r << std::endl;
    }

    return 0;
}
