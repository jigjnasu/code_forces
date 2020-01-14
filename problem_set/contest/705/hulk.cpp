/*
  Contest 705
  Problem A : Hulk
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/01/2020
 */

#include <cstdio>
#include <string>

int main() {
    int n = 0;
    scanf("%d", &n);

    int i = 1;
    while (i <= n - 1)
        printf("I %s that ", i++ % 2 ? "hate" : "love");

    printf("I %s it\n", i % 2 ? "hate" : "love");

    return 0;
}
