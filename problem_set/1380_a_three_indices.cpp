/*
  Contest : 1380
  Problem A : Three indices
  Author : Rakesh Kumar
  Date: 19/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;

        std::vector<int> perm;
        while (n--) {
            int v = 0;
            std::cin >> v;
            perm.emplace_back(v);
        }

        std::string result = "NO";
        int p = 0;
        for (std::size_t i = 1; i < perm.size() - 1; ++i) {
            if (perm[i] > perm[i - 1] && perm[i] > perm[i + 1]) {
                result = "YES";
                p = i;
                break;
            }
        }

        std::cout << result << std::endl;
        if (result == "YES")
            std::cout << p << " " << p + 1 << " " << p + 2 << std::endl;
    }

    return 0;
}
