/*
  Contest: 978
  Problem A : Remove duplicates
  Author : Rakesh Kumar
  Date: 07/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    std::cin >> n;

    std::vector<int> v(n, 0);
    std::unordered_map<int, int> d;
    for (int i = 0; i < n; ++i) {
        int e = 0;
        std::cin >> e;
        v[i] = e;
        d[e] = i;
    }

    std::cout << d.size() << std::endl;
    for (int i = 0; i < n; ++i)
        if (d[v[i]] == i)
            std::cout << v[i] << " ";
    std::cout << std::endl;

    return 0;
}
