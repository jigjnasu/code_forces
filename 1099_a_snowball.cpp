/*
  Contest: 1099
  Problem A : Snowball
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int w = 0;
    int h = 0;
    std::cin >> w >> h;
    int u1 = 0;
    int d1 = 0;
    std::cin >> u1 >> d1;
    int u2 = 0;
    int d2 = 0;
    std::cin >> u2 >> d2;

    int weight = w;
    for (int i = h; i >= 0; --i) {
        weight += i;
        if (i == d1)
            weight -= u1;
        if (i == d2)
            weight -= u2;
        if (weight < 0)
            weight = 0;
    }
    std::cout << weight << std::endl;

    return 0;
}
