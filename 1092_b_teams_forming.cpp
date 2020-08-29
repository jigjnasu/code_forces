/*
  Contest : 1092
  Problem B : Team forming
  Author : Rakesh Kumar
  Date : 26/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    while (n--) {
        int s = 0;
        std::cin >> s;
        v.emplace_back(s);
    }

    std::sort(v.begin(), v.end());
    int d = 0;
    for (int i = 1; i < v.size(); i += 2)
        d += v[i] - v[i - 1];
    std::cout << d << std::endl;

    return 0;
}
