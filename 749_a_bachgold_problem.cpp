/*
  Contest : 749
  Problem A : A. Bachgold Problem
  Author : Rakesh Kumar
  Date: 04/03/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<int> res;
    while (1) {
        if (n == 2 || n == 3) {
            res.emplace_back(n);
            break;
        }
        while (n > 3) {
            res.emplace_back(2);
            n -= 2;
        }
    }

    std::cout << res.size() << std::endl;
    for (int e : res)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}
