/*
  Contest: 588
  Problem A : Duff and meat
  Author : Rakesh Kumar
  Date: 22/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n = 0;
    std::cin >> n;

    int a = 0;
    int p = 0;
    std::cin >> a >> p;
    --n;
    long long int cost = a * p;
    while (n--) {
        int price = 0;
        std::cin >> a >> price;
        if (price < p) {
            cost += a * price;
            p = price;
        } else {
            cost += a * p;
        }
    }

    std::cout << cost << std::endl;

    return 0;
}
