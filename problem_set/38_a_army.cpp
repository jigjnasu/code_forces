/*
  Contest: 38
  Problem A : Army
  Author : Rakesh Kumar
  Date: 09/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> d;
    for (int i = 0; i < n - 1; ++i) {
        int di = 0;
        std::cin >> di;
        d.emplace_back(di);
    }

    int a = 0;
    int b = 0;
    int years = 0;
    std::cin >> a >> b;
    for (int i = a - 1; i < b - 1; ++i)
        years += d[i];
    std::cout << years << std::endl;

    return 0;
}
