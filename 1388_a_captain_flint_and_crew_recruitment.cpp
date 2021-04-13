/*
  Contest : 1388
  Problem A : Captain Flint and Crew Recruitment
  Author : Rakesh Kumar
  Date: 13/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int x = 0;
        std::cin >> x;
        if (x <= 30) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
            int a = 6, b = 10, c = 14;
            int d = x - 30;
            if (a == d || b == d || c == d) {
                ++c;
                --d;
            }
            std::cout << a << " " << b << " " << c << " " << d << std::endl;
        }
    }

    return 0;
}
