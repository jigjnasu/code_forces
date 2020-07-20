/*
  Contest : 136
  Problem A : Presents
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v(n, 0);
    for (int i = 1; i <= n; ++i) {
        int p = 0;
        std::cin >> p;
        v[p - 1] = i;
    }
    for (int p : v)
        std::cout << p << " ";
    std::cout << std::endl;

    return 0;
}
