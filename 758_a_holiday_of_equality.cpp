/*
  Contest: 758
  Problem A : Holiday of equality
  Author : Rakesh Kumar
  Date: 13/06/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    printf("---------------------------------------\n");
    for (int e : v)
        printf("%d ", e);
    printf("\n---------------------------------------\n");
}

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> v(n, 0);
    for (std::size_t i = 0; i < v.size(); ++i) {
        int b = 0;
        scanf("%d", &b);
        v[i] = b;
    }

    std::sort(v.begin(), v.end());

    int t = 0;
    for (std::size_t i = 0; i < v.size() - 1; ++i)
        t += v[v.size() - 1] - v[i];

    printf("%d\n", t);

    return 0;
}
