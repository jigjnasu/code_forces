/*
  Contest : 131
  Problem A : cAPS LOCK
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

inline bool need_change(const std::string& s) {
    for (std::size_t i = 1; i < s.size(); ++i)
        if (std::islower(s[i]))
            return false;
    return true;
}

inline void change(std::string& s) {
    for (std::size_t i = 0; i < s.size(); ++i) {
        if (std::islower(s[i]))
            s[i] = std::toupper(s[i]);
        else
            s[i] = std::tolower(s[i]);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    std::string s;
    std::getline(std::cin, s);
    if (need_change(s))
        change(s);
    std::cout << s << std::endl;

    return 0;
}
