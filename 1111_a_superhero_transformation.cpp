/*
  Contest: 1111
  Problem A : Superhero Transformation
  Author : Rakesh Kumar
  Date: 28/07/2020
*/

#include <bits/stdc++.h>

inline bool vowel(char c) {
    return c == 'a' ||
        c == 'e' ||
        c == 'i' ||
        c == 'o' ||
        c == 'u';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::string t;
    std::getline(std::cin, t);

    std::string r = "Yes";
    if (s.size() == t.size()) {
        for (std::size_t i = 0; i < s.size(); ++i) {
            if (vowel(s[i]) != vowel(t[i])) {
                r = "No";
                break;
            }
        }
    } else {
        r = "No";
    }
    std::cout << r << std::endl;

    return 0;
}
