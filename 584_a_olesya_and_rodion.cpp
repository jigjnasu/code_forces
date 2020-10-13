/*
  Contest : 584
  Problem A : Olesya and Rodion
  Author : Rakesh Kumar
  Date: 14/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, t = 0;
    std::cin >> n >> t;
    std::string s = "-1";
    if (t < 10) {
        s = std::string(n, t + '0');
    } else {
        if (n > 1) {
            s = std::string(n - 1, '1');
            s += '0';
        }
    }
    std::cout << s << std::endl;

    return 0;
}
