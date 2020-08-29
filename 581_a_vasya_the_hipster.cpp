/*
  Contest 581
  Problem A : Vasya the hipster
  Author : Rakesh Kumar
  Date: 11/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    const int p = std::min(a, b);
    const int q = std::max(a - p, b - p) >> 1;
    printf("%d %d\n", p, q);

    return 0;
}
