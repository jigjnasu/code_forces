/*
  Contest 344
  Problem A : Magnets
  Author : Rakesh Kumar
  Date: 30/05/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int g = 1;
    int p = 0;
    scanf("%d", &p); --n;

    while (n--) {
        int m = 0;
        scanf("%d", &m);
        if (m != p)
            ++g;
        p = m;
    }

    printf("%d\n", g);

    return 0;
}
