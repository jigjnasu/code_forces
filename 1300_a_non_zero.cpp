/*
  Contest : 1300
  Problem A : Non-Zero
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
        int n = 0;
        std::cin >> n;

        int z = 0;
        long long s = 0;
        while (n--) {
            int e = 0;
            std::cin >> e;
            if (e == 0)
                ++z;
            s += e;
        }
        if (z + s == 0)
            ++z;
        std::cout << z << std::endl;
    }

    return 0;
}
