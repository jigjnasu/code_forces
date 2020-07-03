/*
  Contest 456
  Problem A : Laptops
  Author : Rakesh Kumar
  Date: 27/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<std::tuple<int, int>> laptops;
    while (n--) {
        int p = 0;
        int q = 0;
        scanf("%d %d", &p, &q);
        laptops.push_back(std::make_tuple(p, q));
    }

    std::sort(laptops.begin(), laptops.end());

    std::string r = "Poor Alex";
    for (std::size_t i = 1; i < laptops.size(); ++i) {
        if (std::get<1>(laptops[i]) < std::get<1>(laptops[i - 1]))
            r = "Happy Alex";
    }

    printf("%s\n", r.c_str());

    return 0;
}
