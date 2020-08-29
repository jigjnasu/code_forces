/*
  Contest : 931
  Problem A : Friends meeting
  Author : Rakesh Kumar
  Date: 13/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    int c = std::abs(a - b);
    const int n = c >> 1;
    int r = ((n * (n + 1)) >> 1) << 1;
    if ((c & 1) == 1)
        r += (n + 1);
    std::cout << r << std::endl;

    return 0;
}
