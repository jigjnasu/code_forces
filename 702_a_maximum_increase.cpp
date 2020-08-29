/*
  Contest : 702
  Problem A : Maximum Increase
  Author : Rakesh Kumar
  Date: 28/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int e = 0, p = 0;
    std::cin >> e; --n;
    p = e;
    int count = 1;
    int max_count = 0;
    while (n--) {
        std::cin >> e;
        if (e > p) {
            ++count;
        } else {
            max_count = std::max(max_count, count);
            count = 1;
        }
        p = e;
    }
    std::cout << std::max(max_count, count) << std::endl;

    return 0;
}
