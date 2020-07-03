/*
  Contest: 1367
  Problem B : Even Array
  Author : Rakesh Kumar
  Date: 17/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int t = 0;
    scanf("%d", &t);
    while (t--) {
        int n = 0;
        scanf("%d", &n);

        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; ++i) {
            int v = 0;
            std::cin >> v;

            if ((i & 1) == 1) {
                if ((v & 1) != 1)
                    ++odd;
            } else {
                if ((v & 1) == 1)
                    ++even;
            }
        }

        if (odd == 0 && even == 0)
            printf("0\n");
        else if (odd == even)
            printf("%d\n", odd);
        else
            printf("-1\n");
    }

    return 0;
}
