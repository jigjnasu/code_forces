/*
  Contest : 1077
  Problem B : Disturbed People
  Author : Rakesh Kumar
  Date: 23/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<bool> v;
    while (n--) {
        bool b = 0;
        std::cin >> b;
        v.emplace_back(b);
    }

    int count = 0;
    for (std::size_t i = 1; i < v.size() - 1; ++i) {
        if (v[i] == 0 && v[i - 1] == 1 && v[i + 1] == 1) {
            ++count;
            v[i + 1] = 0;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
