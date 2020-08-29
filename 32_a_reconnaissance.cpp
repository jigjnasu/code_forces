/*
  Contest 32
  Problem A : Reconnaissance
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    int d = 0;
    scanf("%d %d", &n, &d);

    std::vector<int> h;
    while (n--) {
        int e = 0;
        scanf("%d", &e);
        h.push_back(e);
    }

    std::sort(h.begin(), h.end());

    int c = 0;
    for (std::size_t i = 0; i < h.size(); ++i) {
        std::size_t j = i + 1;
        while (j < h.size() && h[j] - h[i] <= d) {
            ++j;
            ++c;
        }
    }
    printf("%d\n", c * 2);

    return 0;
}
