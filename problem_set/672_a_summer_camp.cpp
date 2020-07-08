/*
  Contest: 672
  Problem A : Summer camp
  Author : Rakesh Kumar
  Date: 09/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string d;
    int i = 1;
    while (d.size() < 1000)
        d += std::to_string(i++);

    int p = 0;
    std::cin >> p;
    std::cout << d[p - 1] << std::endl;
    return 0;
}
