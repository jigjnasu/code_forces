/*
  Contest 520
  Problem A : Pangram
  Author : Rakesh Kumar
  Date: 30/05/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;

    std::vector<bool> v(26, false);
    std::string result = "YES";
    while (n--) {
        char c;
        std::cin >> c;

        if (std::islower(c))
            v[c - 'a'] = true;
        else
            v[c - 'A'] = true;
    }

    for (bool state : v) {
        if (state == false) {
            result = "NO";
            break;
        }
    }
    printf("%s\n", result.c_str());

    return 0;
}
