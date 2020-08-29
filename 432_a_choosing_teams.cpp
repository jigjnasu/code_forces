/*
  Contest 432
  Problem A : Choosing teams
  Author : Rakesh Kumar
  Date: 8/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);

    int t = 0;
    while (n--) {
        int e = 0;
        scanf("%d", &e);

        if (e + k <= 5)
            ++t;
    }

    printf("%d\n", t / 3);

    return 0;
}
