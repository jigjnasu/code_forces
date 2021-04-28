/*
  Contest : 1452
  Problem C : Two Brackets
  Author : Rakesh Kumar
  Date: 28/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        int clopen = 0, slopen = 0, cnt = 0;
        for (char c : s) {
            if (c == '(')
                ++clopen;
            else if (c == '[')
                ++slopen;
            else if (c == ')' && clopen > 0) {
                --clopen; ++cnt;
            } else if (c == ']' && slopen > 0) {
                --slopen; ++cnt;
            }
        }
        std::cout << cnt << std::endl;
    }

    return 0;
}
