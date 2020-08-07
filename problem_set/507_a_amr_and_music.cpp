/*
  Contest : 507
  Problem A : Amr and Music
  Author : Rakesh Kumar
  Date: 07/08/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<std::vector<int>>& v) {
    std::cout << "-------------------------------------------------" << std::endl;
    for (const std::vector<int>& t : v)
        std::cout << t[0] << " --> " << t[1] << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<std::vector<int>> d;
    for (int i = 1; i <= n; ++i) {
        int t = 0;
        std::cin >> t;
        std::vector<int> data;
        data.emplace_back(t);
        data.emplace_back(i);
        d.emplace_back(data);
    }

    std::sort(d.begin(), d.end(), [](std::vector<int> a,
                                     std::vector<int> b) {
                                      return a[0] < b[0];
                                  });
    std::vector<int> r;
    int sum = 0;
    for (std::vector<int> t : d) {
        sum += t[0];
        if (sum > k)
            break;
        r.push_back(t[1]);
    }
    std::cout << r.size() << std::endl;
    for (int i : r)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
