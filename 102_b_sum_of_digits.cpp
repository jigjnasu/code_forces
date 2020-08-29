/*
  Contest : 102
  Problem B : Sum of Digits
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    int count = 0;
    while (s.size() > 1) {
        int sum = 0;
        for (char c : s)
            sum += c - '0';
        s = std::to_string(sum);
        ++count;
    }
    std::cout << count << std::endl;

    return 0;
}
