/*
  Contest : 1487
  Problem A : Arena
  Author : Rakesh Kumar
  Date: 09/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> v;
        while (n--) {
            int e = 0;
            std::cin >> e;
            v.emplace_back(e);
        }
        std::sort(v.begin(), v.end());
        std::size_t i = 1;
        while (i < v.size()) {
            if (v[i] != v[0])
                break;
            ++i;
        }
        std::cout << v.size() - i << std::endl;
    }

    return 0;
}
