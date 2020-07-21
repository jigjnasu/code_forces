/*
  Contest : 595
  Problem A : Vitaly and Night
  Author : Rakesh Kumar
  Date: 22/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;

    int flats = 0;
    for (int floors = 1; floors <= n; ++floors) {
        for (int flat = 1; flat <= m; ++flat) {
            int a = 0, b = 0;
            std::cin >> a >> b;
            if (a || b) ++flats;
        }
    }
    std::cout << flats << std::endl;

    return 0;
}

