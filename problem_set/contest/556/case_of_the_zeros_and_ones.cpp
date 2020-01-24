/*
  Contest 556
  Problem A : Case of the zero and ones
  Author : Rakesh Kumar
  Date: 25/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::string str;
    std::getline(std::cin, str);

    std::vector<int> v(2, 0);
    for (char c : str)
        ++v[c - '0'];

    std::cout << std::abs(v[0] - v[1]) << std::endl;

    return 0;
}
