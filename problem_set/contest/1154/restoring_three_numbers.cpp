/*
  Contest 1154
  Problem A : Restoring three numbers
  Author : Rakesh Kumar
  Date: 11/06/2020
*/

#include <bits/stdc++.h>

using l = long long int;

int main() {
    std::vector<l> x(4, 0);
    scanf("%lld %lld %lld %lld",&x[0], &x[1], &x[2], &x[3]);

    std::sort(x.begin(), x.end());
    const long long int t = (x[2] + (x[0] - x[1])) >> 1;
    printf("%lld %lld %lld\n", x[0] - t, x[1] = t, x[2] - t);

    return 0;
}
