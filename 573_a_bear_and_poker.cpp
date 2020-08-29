/*
  Contest : 1101
  Problem A : Minimum Integer
  Author : Rakesh Kumar
  Date: 01/08/2020
*/

#include <bits/stdc++.h>

inline int min(int n) {
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    return n;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    int n = 0;
    std::cin >> n;
    int m = 0;
    std::cin >> m;
    m = min(m);
    --n;

    std::string res = "Yes";
    while (n--) {
        int e = 0;
        std::cin >> e;
        if (m != min(e)) {
            res = "No";
            break;
        }
    }
    std::cout << res << std::endl;


    return 0;
}
