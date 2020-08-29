/*
  Contest : 991
  Problem A : If at first you don't succeed
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int a = 0;
    int b = 0;
    int c = 0;
    int n = 0;
    std::cin >> a >> b >> c >> n;
    const int r = (a - c) + (b - c) + c;
    if (a >= c && b >= c && r < n)
        std::cout << n - r << std::endl;
    else
        std::cout << -1 << std::endl;

    return 0;
}
