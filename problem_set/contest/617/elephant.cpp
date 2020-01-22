/*
  Contest 617
  Problem A : Elephant
  Author : Rakesh Kumar
  Date: 23/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    const double d = n / static_cast<double>(5);
    printf("%.0f\n", std::ceil(d));
    return 0;
}
