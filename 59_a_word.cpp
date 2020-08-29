/*
  Contest 59
  Problem A : Word
  Author : Rakesh Kumar
  Date: 30/05/2020
*/

#include <bits/stdc++.h>

int main() {
    std::string str;
    std::getline(std::cin, str);

    int l = 0;
    int u = 0;
    for (char c : str)
        if (std::islower(c))
            ++l;
        else
            ++u;

    if (l >= u) {
        std::for_each(str.begin(), str.end(),
                      [](char & c) {
                          c = std::tolower(c);
                      });
    } else {
        std::for_each(str.begin(), str.end(),
                      [](char & c) {
                          c = std::toupper(c);
                      });
    }

    printf("%s\n", str.c_str());

    return 0;
}
