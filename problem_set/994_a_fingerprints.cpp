/*
  Contest : 994
  Problem A : Fingerprints
  Author : Rakesh Kumar
  Date: 17/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    int n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<int> nv;
    std::unordered_map<int, bool> mdict;
    while (n--) {
        int e = 0;
        std::cin >> e;
        nv.emplace_back(e);
    }

    while (m--) {
        int e = 0;
        std::cin >> e;
        mdict[e] = true;
    }

    for (int e : nv)
        if (mdict.find(e) != mdict.end())
            std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}
