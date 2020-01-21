/*
  Contest 266
  Problem A : Stones on the table
  Author : Rakesh Kumar
  Date: 21/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    int r = 0;
    std::string str;
    std::getline(std::cin, str);
    for (std::size_t i = 1; i < str.size(); ++i)
        if (str[i] == str[i - 1])
            ++r;
    std::cout << r << std::endl;


    return 0;
}
