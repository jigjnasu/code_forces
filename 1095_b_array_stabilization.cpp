/*
  Contest : 1095
  Problem B : Array Stabilization
  Author : Rakesh Kumar
  Date: 08/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int first_max = 0;
    int second_max = 0;

    int first_min = (1e+5) + 10;
    int second_min = first_min;

    while (n--) {
        int e = 0;
        std::cin >> e;

        if (e > first_max) {
            second_max = first_max;
            first_max = e;
        } else if (e > second_max) {
            second_max = e;
        }

        if (e < first_min) {
            second_min = first_min;
            first_min = e;
        } else if (e < second_min) {
            second_min = e;
        }
    }
    std::cout << std::min(first_max - second_min, second_max - first_min) << std::endl;

    return 0;
}
