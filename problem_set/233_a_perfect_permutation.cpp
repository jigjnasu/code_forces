/*
  Contest : 233
  Problem A : Perfect permutation
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    if (n & 1 == 1)
        std::cout << -1;
    else {
        for (int i = 2; i <= n; i += 2)
            std::cout << i << " " << i - 1 << " ";
    }
    std::cout << std::endl;

    return 0;
}
