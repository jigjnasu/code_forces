/*
  Contest : 914
  Problem A : Perfect Squares
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    double max = -1e+7;
    while (n--) {
        double v = 0;
        std::cin >> v;
        if (v < 0.0f)
            max = std::max(v, max);
        const double t = std::sqrt(v);
        if (t != std::ceil(t))
            max = std::max(v, max);
    }
    std::cout << static_cast<int>(max) << std::endl;

    return 0;
}
