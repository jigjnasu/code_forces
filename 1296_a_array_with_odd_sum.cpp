/*
  Contest : 1296
  Problem A : Array with Odd Sum
  Author : Rakesh Kumar
  Date: 10/04/2021
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
        int s = 0, e = 0, o = 0;
        while (n--) {
            int v = 0;
            std::cin >> v;
            s += v;
            if (v & 1)
                ++o;
            else
                ++e;
        }
        if ((s & 1) || (e && o))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
