/*
  Contest : 1436
  Problem A : Reorder
  Author : Rakesh Kumar
  Date: 09/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, m = 0;
        std::cin >> n >> m;
        long long s = 0;
        while (n--) {
            int e = 0;
            std::cin >> e;
            s += e;
        }
        std::cout << (s == m ? "YES" : "NO") << std::endl;
    }

    return 0;
}
