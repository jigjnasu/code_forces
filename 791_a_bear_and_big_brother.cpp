/*
  Contest 791
  Problem A : Bear and big brother
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    int c = 1;
    while (1) {
        a *= 3;
        b <<= 1;
        if (a > b)
            break;
        ++c;
    }
    printf("%d\n", c);

    return 0;
}
