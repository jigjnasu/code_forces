/*
  Contest 580
  Problem A : Kefa and first steps
  Author : Rakesh Kumar
  Date: 07/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int p = 0;
    scanf("%d", &p);

    int v = 1;
    int m = 0;
    --n;
    while (n--) {
        int e = 0;
        scanf("%d", &e);

        if (e >= p) {
            ++v;
        } else {
            m = std::max(v, m);
            v = 1;
        }

        p = e;
    }

    m = std::max(v, m);
    printf("%d\n", m);

    return 0;
}
