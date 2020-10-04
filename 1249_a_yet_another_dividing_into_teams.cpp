/*
  Contest : 1249
  Problem A : Yet Another Dividing into Teams
  Author : Rakesh Kumar
  Date: 04/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int q = 0;
    std::cin >> q;
    while (q--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> v;
        while (n--) {
            int s = 0;
            std::cin >> s;
            v.emplace_back(s);
        }

        std::sort(v.begin(), v.end());
        bool found = false;
        for (std::size_t i = 1; i < v.size(); ++i)
            if (v[i] - v[i - 1] == 1)
                found = true;
        std::cout << (found ? 2 : 1) << std::endl;
    }

    return 0;
}
