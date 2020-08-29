/*
  Contest : 677
  Problem A : Vanya and Fence
  Author : Rakesh Kumar
  Date: 17/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    int h = 0;
    std::cin >> n >> h;
    int w = 0;
    while (n--) {
        int m = 0;
        std::cin >> m;
        w += m > h ? 2 : 1;
    }
    std::cout << w << std::endl;

    return 0;
}
