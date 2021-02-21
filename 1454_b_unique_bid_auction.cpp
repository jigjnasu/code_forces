/*
  Contest : 1454
  Problem B : Unique Bid Auction
  Author : Rakesh Kumar
  Date: 21/02/2021
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
        std::map<int, int> d;
        while (n--) {
            int e = 0;
            std::cin >> e;
            v.emplace_back(e);
            ++d[e];
        }

        int r = 0;
        for (const auto& it : d) {
            if (it.second == 1) {
                r = it.first;
                break;
            }
        }
        int index = -1;
        if (r) {
            for (std::size_t i = 0; i < v.size(); ++i) {
                if (v[i] == r) {
                    index = i + 1;
                    break;
                }
            }
        }

        std::cout << index << std::endl;
    }

    return 0;
}
