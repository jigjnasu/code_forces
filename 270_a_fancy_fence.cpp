/*
  Contest 270
  Problem A : Fancy fence
  Author : Rakesh Kumar
  Date: 07/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int angle = 0;
        scanf("%d", &angle);

        const double t = 360 / static_cast<double>(180 - angle);
        printf("%s\n", static_cast<int>(t) == t ? "YES" : "NO");
    }

    return 0;
}
