/*
  Contest : 478
  Problem A : Initial Bet
  Author : Rakesh Kumar
  Date: 23/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int s = 0;
    for (int i = 0; i < 5; ++i) {
        int c = 0;
        std::cin >> c;
        s += c;
    }

    if (s && s % 5 == 0)
        std::cout << s / 5 << std::endl;
    else
        std::cout << -1 << std::endl;

    return 0;
}
