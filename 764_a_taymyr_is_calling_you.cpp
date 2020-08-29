/*
  Contest : 764
  Problem A : Taymyr is calling you
  Author : Rakesh Kumar
  Date: 31/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0, z = 0;
    std::cin >> n >> m >> z;
    int tapka = 0;
    for (int i = 1; i <= z / m; ++i)
        if ((m * i) % n == 0)
            ++tapka;
    std::cout << tapka << std::endl;

    return 0;
}
