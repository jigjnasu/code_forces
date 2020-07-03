/*
  Contest 337
  Problem A : Puzzles
  Author : Rakesh Kumar
  Date: 13/06/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    printf("-------------------------------------------------\n");
    for (int e : v)
        printf("%d ", e);
    printf("\n-------------------------------------------------\n");
}

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    std::vector<int> p;
    while (m--) {
        int e = 0;
        scanf("%d", &e);
        p.push_back(e);
    }

    std::sort(p.begin(), p.end());
    int r = INT_MAX;
    std::size_t i = n - 1;

    for (; i < p.size(); ++i)
        r = std::min(r, (p[i] - p[i - n + 1]));

    printf("%d\n", r);

    return 0;
}
