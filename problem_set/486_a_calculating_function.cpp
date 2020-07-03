/*
  Contest 486
  Problem A : Calculating functions
  Author : Rakesh Kumar
  Date: 30/05/2020
*/

#include <bits/stdc++.h>

int main() {
    unsigned long long int n = 0;
    scanf("%llu", &n);

    const unsigned long long int r = n >> 1;
    printf("%lld\n", n & 1 == 1 ? (r + 1) * - 1 : r);

    return 0;
}
