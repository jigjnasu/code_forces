/*
  Contest : 1399
  Problem A : Remove Smallest
  Author : Rakesh Kumar
  Date: 09/08/2020
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
            int a = 0;
            std::cin >> a;
            v.emplace_back(a);
        }
        std::sort(v.begin(), v.end());
        std::string r = "YES";
        for (std::size_t i = 1; i < v.size(); ++i) {
            if (v[i] - v[i - 1] > 1) {
                r = "NO";
                break;
            }
        }
        std::cout << r << std::endl;
    }

    return 0;
}
