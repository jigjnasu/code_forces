/*
  Contest 427
  Problem A : Police recruits
  Author : Rakesh Kumar
  Date: 8/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int man = 0;
    int crime = 0;
    while (n--) {
        int e = 0;
        scanf("%d", &e);

        if (e == -1) {
            if (man > 0)
                --man;
            else
                ++crime;
        } else {
            man += e;
        }
    }

    printf("%d\n", crime);

    return 0;
}
