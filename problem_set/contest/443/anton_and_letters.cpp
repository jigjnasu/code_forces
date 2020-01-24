/*
  Contest 443
  Problem A : Anton and letters
  Author : Rakesh Kumar
  Date: 25/01/2020
*/


#include <bits/stdc++.h>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::vector<bool> s(26, false);
    for (char c : str)
        if (std::islower(c))
            s[c - 'a'] = true;

    int c = 0;
    for (bool b : s)
        c += b;
    std::cout << c << std::endl;

    return 0;
}
