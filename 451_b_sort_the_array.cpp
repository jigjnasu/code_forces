/*
  Contest: 451
  Problem B : Sort the array
  Author : Rakesh Kumar
  Date: 13/06/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    printf("-----------------------------------------------------------------\n");
    for (int e : v)
        printf("%d ", e);
    printf("\n-----------------------------------------------------------------\n");
}

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> a(n, 0);
    std::vector<int> b(n, 0);

    for (std::size_t i = 0; i < a.size(); ++i) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    std::sort(a.begin(), a.end());

    int p = -1;
    int q = -1;
    int i = 0;
    while (i < n) {
        if (a[i] != b[i]) {
            p = i;
            while (i + 1 < n && b[i] > b[i + 1])
                ++i;
            q = i;
        }
        ++i;
    }

    if (p == -1 && q == -1) {
        printf("yes\n1 1\n");
    } else {
        std::sort(b.begin() + p, b.begin() + q + 1);
        for (std::size_t i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                printf("no\n");
                return 0;
            }
        }
        printf("yes\n%d %d\n", p + 1, q + 1);
    }

    return 0;
}
