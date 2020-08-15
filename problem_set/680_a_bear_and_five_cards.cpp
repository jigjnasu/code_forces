/*
  Contest : 680
  Problem A : Bear and Five Cards
  Author : Rakesh Kumar
  Date: 12/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::unordered_map<int, int> d;
    int total_sum = 0;
    for (int i = 0; i < 5; ++i) {
        int c = 0;
        std::cin >> c;
        ++d[c];
        total_sum += c;
    }

    int min = total_sum;
    for (auto it = d.begin(); it != d.end(); ++it) {
        if (it->second >= 3)
            min = std::min(min, total_sum - 3 * it->first);
        if (it->second == 2)
            min = std::min(min, total_sum - 2 * it->first);
    }
    std::cout << min << std::endl;

    return 0;
}
