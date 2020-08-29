/*
  Contest: 450
  Problem A : Jzzhu and children
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    double m = 0;
    std::cin >> n >> m;
    std::vector<int> kids;
    int a = 0;
    std::cin >> a;
    int max = std::ceil(a / m);
    int kid = 1;
    for (int i = 2; i <= n; ++i) {
        int a = 0;
        std::cin >> a;
        if (std::ceil(a / m) >= max) {
            max = std::ceil(a / m);
            kid = i;
        }
    }

    std::cout << kid << std::endl;

    return 0;
}
