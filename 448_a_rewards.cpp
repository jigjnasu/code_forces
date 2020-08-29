/*
  Contest: 448
  Problem A : Rewards
  Author : Rakesh Kumar
  Date: 20/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::vector<int> a(3, 0);
    std::cin >> a[0] >> a[1] >> a[2];
    const int c = a[0] + a[1] + a[2];

    std::vector<int> b(3, 0);
    std::cin >> b[0] >> b[1] >> b[2];
    const int m = b[0] + b[1] + b[2];

    const int p = std::ceil(c / static_cast<double>(5));
    const int q = std::ceil(m / static_cast<double>(10));

    int n = 0;
    std::cin >> n;
    if (p + q <= n)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
