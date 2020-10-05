/*
  Contest : 1152
  Problem A : Neko Finds Grapes
  Author : Rakesh Kumar
  Date: 05/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;

    int talla[2] = {0};
    int chaabi[2] = {0};

    while (n--) {
        int e = 0;
        std::cin >> e;
        ++talla[e & 1];
    }
    while (m--) {
        int e = 0;
        std::cin >> e;
        ++chaabi[e & 1];
    }
    std::cout << std::min(talla[0], chaabi[1]) + std::min(talla[1], chaabi[0]) << std::endl;

    return 0;
}
