/*
  Contest : 1331
  Problem D : Again?
  Author : Rakesh Kumar
  Date: 23/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    std::string s;
    std::cin >> s;
    const int t = s[s.size() - 1] - '0';
    std::cout << (t & 1) << std::endl;
    return 0;
}
