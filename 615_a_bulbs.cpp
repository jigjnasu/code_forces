/*
  Contest : 615
  Problem A : Bulbs
  Author : Rakesh Kumar
  Date : 26/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    std::set<int> ladi;
    while (n--) {
        int c = 0;
        std::cin >> c;
        while (c--) {
            int b = 0;
            std::cin >> b;
            ladi.insert(b);
        }
    }
    std::cout << (static_cast<int>(ladi.size()) == m ? "YES" : "NO") << std::endl;
    return 0;
}
