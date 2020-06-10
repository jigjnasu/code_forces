/*
  Contest: 996
  Problem A : Hit the lottery
  Author : Rakesh Kumar
  Date: 11/06/2020
*/

#include <bits/stdc++.h>

using l = long long int;
const std::vector<int> denominations = {100, 20, 10, 5, 1};

int main() {
    l n = 0;
    scanf("%lld", &n);

    int d = 0;
    for (int c : denominations) {
        d += n / c;
        n -= c * (n / c);
    }

    printf("%d\n", d);

    return 0;
}
