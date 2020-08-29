/*
  Contest : 1110
  Problem A : Parity
  Author : Rakesh Kumar
  Date: 08/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int b = 0, k = 0;
    std::cin >> b >> k;
    int count = 0;
    while (k--) {
        int d = 0;
        std::cin >> d;
        if (k > 0) {
            if (((d * b) & 1) == 1)
                ++count;
        } else {
            if ((d & 1) == 1)
                ++count;
        }
    }

    if ((count & 1) == 1)
        std::cout << "odd" << std::endl;
    else
        std::cout << "even" << std::endl;

    return 0;
}
