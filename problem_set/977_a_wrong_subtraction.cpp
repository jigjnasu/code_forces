/*
  Contest 977
  Problem A : Wrong subtraction
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>

int main() {
    int n = 0;
    int c = 0;
    scanf("%d %d", &n, &c);

    while (c--) {
        if (n % 10 == 0)
            n /= 10;
        else
            --n;
    }
    printf("%d\n", n);

    return 0;
}
