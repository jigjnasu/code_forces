/*
  Contest : 1380
  Problem A : Three indices
  Author : Rakesh Kumar Baghel
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

        std::vector<int> v(n, 0);
        std::cin >> v[0] >> v[1];
        std::string result = "NO";
        int p = 0;
        for (int i = 2; i < n; ++i) {
            std::cin >> v[i];
            if (v[i - 1] > v[i - 2] &&
                v[i - 1] > v[i]) {
                p = i - 1;
                result = "YES";
            }
        }

        std::cout << result << std::endl;
        if (result == "YES")
            std::cout << p << " " << p + 1 << " " << p + 2 << std::endl;
    }

    return 0;
}
