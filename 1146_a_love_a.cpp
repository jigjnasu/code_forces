/*
  Contest : 1146
  Problem A : Love "A"
  Author : Rakesh Kumar
  Date: 13/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    int a = 0, x = 0;
    for (char c : s)
        if (c == 'a') ++a;
    std::cout << std::min(static_cast<int>((a << 1) - 1),
                          static_cast<int>(s.size())) << std::endl;;

    return 0;
}
