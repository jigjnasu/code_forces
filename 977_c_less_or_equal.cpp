/*
  Contest : 977
  Problem C : Less or Equal
  Author : Rakesh Kumar
  Date: 04/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<int> v;
    while (n--) {
        int e = 0;
        std::cin >> e;
        v.emplace_back(e);
    }
    std::sort(v.begin(), v.end());

    int r = -1;
    if (k == 0) {
        if (v[0] > 1)
            r = 1;
    } else {
        if (static_cast<int>(v.size()) == k)
            r = v[k - 1];
        else if (v[k - 1] != v[k])
            r = v[k - 1];
    }
    std::cout << r << std::endl;

    return 0;
}
