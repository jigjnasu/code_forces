/*
  Contest : 1368
  Problem A : C+=
  Author : Rakesh Kumar
  Date: 05/03/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        long long int a = 0, b = 0, n = 0;
        std::cin >> a >> b >> n;
        int count = 0;
        while (1) {
            ++count;
            if (a < b) {
                a += b;
                if (a > n)
                    break;
            } else {
                b += a;
                if (b > n)
                    break;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}
