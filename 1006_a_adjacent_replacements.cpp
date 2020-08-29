/*
  Contest : 1006
  Problem A : Adjacent Replacements
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        ll e = 0;
        std::cin >> e;
        if ((e & 1) == 1)
            std::cout << e << " ";
        else
            std::cout << e - 1 << " ";
    }
    std::cout << std::endl;

    return 0;
}
