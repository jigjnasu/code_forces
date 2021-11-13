/*
  Contest : 1352
  Problem A : Sum of Round Numbers
  Author : Rakesh Kumar
  Date: 14/11/2021
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;

        std::vector<int> r;
        while (n) {
            const int l = static_cast<int>(std::to_string(n).size()) - 1;
            const int d = std::pow(10, l);
            r.emplace_back((n / d) * d);
            n = n % d;
        }

        std::cout << r.size() << std::endl;
        for (int e : r)
            std::cout << e << " ";
        std::cout << std::endl;

    }

    return 0;
}