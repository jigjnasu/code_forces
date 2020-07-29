/*
  Contest : 837
  Problem A : Text Volume
  Author : Rakesh Kumar
  Date: 29/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    int max = 0;
    int count = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z')
            ++count;
        if (c == ' ') {
            max = std::max(max, count);
            count = 0;
        }
    }

    max = std::max(max, count);
    std::cout << max << std::endl;

    return 0;
}
