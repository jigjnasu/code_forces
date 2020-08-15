/*
  Contest : 441
  Problem A : Valera and Antique Items
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, v = 0;
    std::cin >> n >> v;
    std::set<int> r;
    for (int i = 1; i <= n; ++i) {
        int k = 0;
        std::cin >> k;
        while (k--) {
            int m = 0;
            std::cin >> m;
            if (m < v) r.insert(i);
        }
    }

    std::cout << r.size() << std::endl;
    for (int e : r)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}
