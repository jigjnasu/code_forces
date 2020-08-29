/*
  Contest : 560
  Problem A : Currency System in Geraldion
  Author : Rakesh Kumar
  Date: 23/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int r = 1;
    while (n--) {
        int paisa = 0;
        std::cin >> paisa;
        if (paisa == 1)
            r = -1;
    }
    std::cout << r << std::endl;

    return 0;
}
