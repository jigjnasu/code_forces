/*
  Contest: 1300
  Problem B : Assigning to Classes
  Author : Rakesh Kumar
  Date: 01/01/2021
*/

#include <bits/stdc++.h>

using ll = long long int;

inline void print(const std::vector<int>& v) {
    std::cout << "--------------------------------------------" << std::endl;
    for (int e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> v;
        for (int i = 0; i < n << 1; ++i) {
            int e = 0;
            std::cin >> e;
            v.emplace_back(e);
        }
        std::sort(v.begin(), v.end());
        std::cout << v[n] - v[n - 1] << std::endl;
    }

    return 0;
}
