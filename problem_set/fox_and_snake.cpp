/*
  Contest 510
  Problem A : Fox and snake
  Author : Rakesh Kumar
  Date: 27/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    bool right = true;
    for (int r = 1; r <= n; ++r) {
        if (r & 1) {
            for (int c = 0; c < m; ++c)
                printf("#");
        } else {
            if (right) {
                right = false;
                for (int c = 0; c < m - 1; ++c)
                    printf(".");
                printf("#");
            } else {
                right = true;
                printf("#");
                for (int c = 0; c < m - 1; ++c)
                    printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
