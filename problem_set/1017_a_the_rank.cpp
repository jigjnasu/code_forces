/*
  Contest: 1017
  Problem A : The Rank
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    std::cin >> n;
    int e = 0;
    int g = 0;
    int m = 0;
    int h = 0;
    std::cin >> e >> g >> m >> h;
    const int s = e + g + m + h;
    int rank = 1; --n;
    while (n--) {
        std::cin >> e >> g >> m >> h;
        if (e + g + m + h > s)
            ++rank;
    }

    std::cout << rank << std::endl;

    return 0;
}
