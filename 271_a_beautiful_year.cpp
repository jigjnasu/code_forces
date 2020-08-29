/*
  Contest : 271
  Problem A : Beautiful Year
  Author : Rakesh Kumar
  Date: 29/08/2020
*/

#include <bits/stdc++.h>

bool anokha(int v) {
    std::string varsh = std::to_string(v);
    std::vector<bool> d(10, false);
    for (char c : varsh)
        if (d[c - '0'])
            return false;
        else
            d[c - '0'] = true;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int varsh;
    std::cin >> varsh;
    while (!anokha(++varsh));
    std::cout << varsh << std::endl;

    return 0;
}
