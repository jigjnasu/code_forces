/*
  Contest 1207
  Problem A : There are two types of burgers
  Author : Rakesh Kumar
  Date: 19/02/2020
*/

#include <bits/stdc++.h>

inline int build_burgers(int b, int p) {
    int t = b >> 1;
    return std::min((b >> 1), p);
}

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int b = 0;
        int p = 0;
        int f = 0;
        scanf("%d %d %d", &b, &p, &f);

        int h = 0;
        int c = 0;
        scanf("%d %d", &h, &c);

        int m = 0;
        if (h > c) {
            int t = build_burgers(b, p);
            b -= (t << 1);
            m += t * h;

            t = build_burgers(b, f);
            m += t * c;
        } else {
            int t = build_burgers(b, f);
            b -= (t << 1);
            m += t * c;

            t = build_burgers(b, p);
            m += t * h;
        }
        printf("%d\n", m);
    }

    return 0;
}
