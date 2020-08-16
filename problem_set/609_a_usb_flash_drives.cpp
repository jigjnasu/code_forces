/*
  Contest : 609
  Problem A : USB Flash Drives
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int m = 0;
    std::cin >> m;
    std::vector<int> v;
    while (n--) {
        int s = 0;
        std::cin >> s;
        v.emplace_back(s);
    }
    std::sort(v.rbegin(), v.rend());
    std::size_t i = 0;
    std::size_t sum = 0;
    while (i < v.size() && sum < m)
        sum += v[i++];
    std::cout << i << std::endl;

    return 0;
}
