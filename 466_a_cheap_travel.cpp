/*
  Contest: 466
  Problem A : Cheap travel
  Author : Rakesh Kumar
  Date: 25/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n = 0;
    int m = 0;
    int a = 0;
    int b = 0;
    std::cin >> n >> m >> a >> b;

    const int x = n * a;
    const double t = n / static_cast<double>(m);
    const int y = std::ceil(t) * b;
    const int z = (std::floor(t) * b) + ((n % m) * a);
    std::cout << std::min(std::min(x, y), z) << std::endl;

    return 0;
}
