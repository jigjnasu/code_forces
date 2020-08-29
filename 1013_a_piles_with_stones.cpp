/*
  Contest : 1013
  Problem A : Piles with stones
  Author : Rakesh Kumar
  Date: 13/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int a = 0;
    for(int i = 0; i < n; ++i) {
        int e = 0;
        std::cin >> e;
        a += e;
    }

    int b = 0;
    for(int i = 0; i < n; ++i) {
        int e = 0;
        std::cin >> e;
        b += e;
    }

    std::cout << (a >= b ? "Yes" : "No") << std::endl;

    return 0;
}

