/*
  Contest : 919
  Problem A : Supermarket
  Author : Rakesh Kumar
  Date: 23/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    double min = (1e+9) + 1;
    while (n--) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        const double p = (a / static_cast<double>(b)) * m;
        min = std::min(p, min);
    }
    std::cout << std::setprecision(6) << std::fixed;
    std::cout << min  << std::endl;

    return 0;
}
