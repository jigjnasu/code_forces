/*
  Contest 50
  Problem A : Domino pilling
  Author : Rakesh Kumar
  Date: 17/01/2020
*/

#include <cstdio>

int main() {
    int r = 0;
    int c = 0;
    scanf("%d %d", &r, &c);
    printf("%d\n", (r * c ) >> 1);

    return 0;
}
