/*
  Contest 37
  Problem A : Towers
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> towers(1001, 0);
    while (n--) {
        int h = 0;
        scanf("%d", &h);
        ++towers[h];
    }

    printf("%d %d\n", *std::max_element(towers.begin(), towers.end()),
           towers.size() - std::count(towers.begin(), towers.end(), 0));

    return 0;
}
