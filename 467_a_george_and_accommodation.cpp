/*
  Contest : 467
  Problem A : George and accomodation
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int rooms = 0;
    while (n--) {
        int p = 0;
        int q = 0;
        std::cin >> p >> q;
        if (q - p >= 2) ++rooms;
    }
    std::cout << rooms << std::endl;

    return 0;
}
