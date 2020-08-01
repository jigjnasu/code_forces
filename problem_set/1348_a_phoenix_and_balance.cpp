/*
  Contest: 1348
  Problem A : Phoenix and Balance
  Author : Rakesh Kumar
  Date: 01/08/2020
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
        int total = 1 << n;
        for (int i = 1; i < (n >> 1); ++i)
            total += (1 << i);
        for (int i = n - 1; i >= (n >> 1); --i)
            total -= (1 << i);
        std::cout << total << std::endl;
    }
    return 0;
}
