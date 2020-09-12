/*
  Contest : 1330
  Problem A : Dreamoon and Ranking Collection
  Author : Rakesh Kumar
  Date: 13/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, x = 0;
        std::cin >> n >> x;
        std::vector<bool> places(1001, false);
        while (n--) {
            int p = 0;
            std::cin >> p;
            places[p] = true;
        }
        for (std::size_t i = 1; x && i < places.size(); ++i) {
            if (!places[i]) {
                places[i] = true; --x;
            }
        }

        for (std::size_t i = 1; i < places.size(); ++i) {
            if (!places[i]) {
                std::cout << i - 1 << std::endl;
                break;
            }
        }
    }

    return 0;
}
