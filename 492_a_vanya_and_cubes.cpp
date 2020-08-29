/*
  Contest 492
  Problem A : Vanya and cubes
  Author : Rakesh Kumar
  Date: 27/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int h = 1;
    int c = 0;

    while (1) {
        c += (h * (h + 1)) >> 1;
        if (c == n)
            break;

        if (c > n) {
            --h;
            break;
        }
        ++h;
    }

    printf("%d\n", h);

    return 0;
}
