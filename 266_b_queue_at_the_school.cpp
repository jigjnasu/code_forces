/*
  Contest : 266
  Problem B : Queue at the school
  Author : Rakesh Kumar
  Date: 29/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, t = 0;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;
    while (t--) {
        for (int i = 1; i < n; ++i) {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                s[i] = 'B'; s[i - 1] = 'G';
                ++i;
            }
        }
    }
    std::cout << s << std::endl;

    return 0;
}
