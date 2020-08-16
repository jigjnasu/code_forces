/*
  Contest : 915
  Problem A : Garden
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    int max = 0;
    while (n--) {
        int b = 0;
        std::cin >> b;
        if (k % b == 0)
            max = std::max(max, b);
    }
    std::cout << k / max << std::endl;

    return 0;
}
