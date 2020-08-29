/*
  Contest : 41
  Problem A : Translation
  Author : Rakesh Kumar
  Date: 26/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::getline(std::cin, s);
    std::getline(std::cin, t);
    std::string r = "YES";
    if (s.size() == t.size()) {
        int i = 0, j = s.size() - 1;
        while (i < s.size()) {
            if (s[i++] != t[j--]) {
                r = "NO";
                break;
            }
        }
    } else {
        r = "NO";
    }
    std::cout << r << std::endl;

    return 0;
}
