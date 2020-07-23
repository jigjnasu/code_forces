/*
  Contest : 1360
  Problem B : Honest coach
  Author : Rakesh Kumar
  Date: 23/07/2020
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
            int s = 0;
            std::cin >> s;
            v.emplace_back(s);
        }

        std::sort(v.begin(), v.end());
        int min = v[1] - v[0];
        for (std::size_t i = 2; i < v.size(); ++i)
            min = std::min(v[i] - v[i - 1], min);
        std::cout << min << std::endl;
    }

    return 0;
}
