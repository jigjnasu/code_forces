/*
  Contest : 581
  Problem B : Luxurious Houses
  Author : Rakesh Kumar
  Date: 28/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    while (n--) {
        int f = 0;
        std::cin >> f;
        v.emplace_back(f);
    }

    int max = v[v.size() - 1];
    v[v.size() - 1] = 0;
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] > max) {
            max = v[i];
            v[i] = 0;
        } else {
            v[i] = max + 1 - v[i];
        }
    }
    for (int f : v)
        std::cout << f << " ";
    std::cout << std::endl;

    return 0;
}
