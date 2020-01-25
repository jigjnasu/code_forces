/*
  Contest 599
  Problem A : Patrick and shopping
  Author : Rakesh Kumar
  Date: 25/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    const int r1 = a + b + c;
    const int r2 = (a << 1) + (b << 1);
    const int r3 = (a << 1) + (c << 1);
    const int r4 = (b << 1) + (c << 1);
    printf("%d\n", std::min(std::min(r1, r2), std::min(r3, r4)));

    return 0;
}
