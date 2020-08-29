/*
  Contest : 1201
  Problem B : Zero Array
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, max = 0;
    ull sum = 0;
    std::cin >> n;
    while (n--) {
        int e = 0;
        std::cin >> e;
        sum += e;
        max = std::max(max, e);
    }
    if (sum & 1 || (max << 1) > sum)
        std::cout << "NO" << std::endl;
    else
        std::cout << "YES" << std::endl;

    return 0;
}
