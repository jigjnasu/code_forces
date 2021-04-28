/*
  Contest : 1430
  Problem B : Barrels
  Author : Rakesh Kumar
  Date: 28/04/2021
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, k = 0, e = 0;
        std::cin >> n >> k;
        std::vector<int> v;
        while (n--) {
            std::cin >> e;
            v.emplace_back(e);
        }
        std::sort(v.begin(), v.end(), [](int a, int b) {
            return a > b;
        });

        ll s = v[0];
        for (int i = 1; i <= k; ++i)
            s += v[i];
        std::cout << s << std::endl;
    }

    return 0;
}
