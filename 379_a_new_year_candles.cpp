/*
  Contest: 379
  Problem A : New year candles
  Author : Rakesh Kumar
  Date: 25/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    int h = a;
    while (a >= b) {
        h += (a / b);
        a = (a / b) + (a % b);
    }
    std::cout << h << std::endl;

    return 0;
}
