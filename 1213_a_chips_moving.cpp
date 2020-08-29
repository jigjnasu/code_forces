/*
  Contest : 1213
  Problem A : Chips Moving
  Author : Rakesh Kumar
  Date: 08/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int arr[2] = {0};
    while (n--) {
        int p = 0;
        std::cin >> p;
        ++arr[p & 1];
    }
    std::cout << std::min(arr[0], arr[1]) << std::endl;

    return 0;
}
