/*
  Contest : 1392
  Problem A : Omkar and password
  Author : Rakesh Kumar
  Date : 09/04/20201
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

        bool same = true;
        int p = 0;
        std::cin >> p;
        for (int i = 1; i < n; ++i) {
            int e = 0;
            std::cin >> e;
            if (p != e)
                same = false;
        }
        if (same)
            std::cout << n << std::endl;
        else
            std::cout << 1 << std::endl;
    }

    return 0;
}
