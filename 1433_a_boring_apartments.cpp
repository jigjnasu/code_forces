/*
  Contest : 1433
  Problem A : Boring Apartments
  Author : Rakesh Kumar
  Date: 31/01/2021
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
        int total = 10 * ((n % 10) - 1);
        const int sz = static_cast<int>(std::to_string(n).size());
        total += (sz * (sz + 1)) >> 1;
        std::cout << total << std::endl;
    }

    return 0;
}
