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
    bool found = false;
    while (n--) {
        int paisa = 0;
        std::cin >> paisa;
        if (paisa == 1)
            found = true;
    }
    if (found)
        std::cout << -1 << std::endl;
    else
        std::cout << 1 << std::endl;

    return 0;
}
