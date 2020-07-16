/*
  Contest : 551
  Problem A : GukiZ and Contest
  Author : Rakesh Kumar
  Date: 17/07/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    std::cout << "-----------------------------------------------------" << std::endl;
    for (int e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
}

int pos(const std::vector<int>& v, int n, int s, int e) {
    while (1) {
        if (s == e) {
            int i = s;
            while(i >= 1 && v[i] == v[i - 1]) --i;
            return i + 1;
        }

        const int m = (s + e) >> 1;
        if (n >= v[m])
            e = m;
        else
            s = m + 1;
    }
    return 0;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<int> v1;
    while (n--) {
        int e = 0;
        std::cin >> e;
        v1.emplace_back(e);
    }

    std::vector<int> v2 = v1;
    std::sort(v2.rbegin(), v2.rend());

    for (int e : v1)
        std::cout << pos(v2, e, 0, v1.size() - 1) << " ";
    std::cout << std::endl;

    return 0;
}
