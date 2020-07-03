/*
  Contest: 750
  Problem A : Year and hurry
  Author : Rakesh Kumar
  Date: 21/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    int k = 0;
    std::cin >> n >> k;

    int t = 240 - k;
    int i = 0;
    while (true) {
        const int v = (i + 1) * 5;
        if (v > t || i >= n)
            break;
        ++i; t -= v;
    }

    std::cout << i << std::endl;

    return 0;
}
