/*
  Contest : 262
  Problem A : Roma and Lucky Numbers
  Author : Rakesh Kumar
  Date: 05/10/2020
*/

#include <bits/stdc++.h>

inline int count(int n) {
    int r = 0;
    for (char c : std::to_string(n))
        if (c == '4' || c == '7')
            ++r;
    return r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    int result = 0;
    while (n--) {
        int e = 0;
        std::cin >> e;
        if (count(e) <= k)
            ++result;
    }
    std::cout << result << std::endl;

    return 0;
}
