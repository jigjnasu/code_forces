/*
  Contest : 900
  Problem A : Find extra one
  Author : Rakesh Kumar
  Date: 29/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < n; ++i) {
        int x = 0, y = 0;
        std::cin >> x >> y;
        if (x > 0)
            ++positive;
        else
            ++negative;
    }
    std::string res = "No";
    if (positive >= n - 1 || negative >= n - 1)
        res = "Yes";
    std::cout << res << std::endl;

    return 0;
}
