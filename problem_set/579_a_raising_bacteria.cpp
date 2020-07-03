/*
  Contest 579
  Problem A : Raising bacteria
  Author : Rakesh Kumar
  Date: 27/01/2020
*/

#include <bits/stdc++.h>

using l = long long int;

int main() {
    l n = 0;
    scanf("%lld", &n);

    int c = 0;
    while (n / 2 != 0) {
        if (n % 2 == 1)
            ++c;
        n /= 2;
    }
    printf("%d\n", c + 1);

    return 0;
}
