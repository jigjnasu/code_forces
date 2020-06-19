/*
  Contest: 149
  Problem A : Buisness Trip
  Author : Rakesh Kumar
  Date: 20/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int k = 0;
    scanf("%d", &k);

    std::vector<int> month(12, 0);
    for (std::size_t i = 0; i < month.size(); ++i) {
        int height = 0;
        scanf("%d", &height);
        month[i] = height;
    }

    std::sort(month.begin(), month.end());

    int i = 11;
    while (i >= 0 && k > 0) {
        k -= month[i--];
    }

    if (k > 0)
        printf("-1\n");
    else
        printf("%d\n", 12 - i - 1);

    return 0;
}
