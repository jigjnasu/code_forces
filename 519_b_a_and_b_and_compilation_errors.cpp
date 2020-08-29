/*
  Contest 519
  Problem B : A and b and compilation errors
  Author : Rakesh Kumar
  Date: 19/02/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int t = 0;
    for (int i = 0; i < n; ++i) {
        int e = 0;
        scanf("%d", &e);
        t ^= e;
    }

    int s = 0;
    for (int i = 0; i < n - 1; ++i) {
        int e = 0;
        scanf("%d", &e);
        t ^= e;
        s ^= e;
    }

    printf("%d\n", t);
    for (int i = 0; i < n - 2; ++i) {
        int e = 0;
        scanf("%d", &e);
        s ^= e;
    }
    printf("%d\n", s);

    return 0;
}
