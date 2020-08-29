/*
  Contest : 1398
  Problem A : Bad Triangle
  Author : Rakesh Kumar
  Date: 21/08/2020
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
        std::vector<int> tri;
        while (n--) {
            int w = 0;
            std::cin >> w;
            tri.emplace_back(w);
        }

        bool result = false;
        int sum = tri[0] + tri[1];
        for (std::size_t i = 2; i < tri.size(); ++i) {
            if (tri[i] >= sum) {
                std::cout << "1 2 " << i + 1 << std::endl;
                result = true;
                break;
            }
        }

        if (!result)
            std::cout << "-1" << std::endl;
    }

    return 0;
}
