/*
  Contest: 659
  Problem A : Round house
  Author : Rakesh Kumar
  Date: 10/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    int a = 0;
    int b = 0;
    std::cin >> n >> a >> b;
    std::cout << ((a - 1 + b) % n + n) % n + 1;
    return 0;
}
