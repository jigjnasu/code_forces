/*
  Contest : 133
  Problem A : HQ9+
  Author : Rakesh Kumar
  Date: 26/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::string r = "NO";
    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            r = "YES";
            break;
        }
    }
    std::cout << r << std::endl;

    return 0;
}
