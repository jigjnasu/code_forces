/*
  Contest : 746
  Problem B : Decoding
  Author : Rakesh Kumar
  Date: 06/10/2020
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
    for (int i = n - 2; i >= 0; i -= 2)
        std::cout << s[i];
    for (int i = (n & 1) ? 0 : 1; i < n; i += 2)
        std::cout << s[i];
    std::cout << std::endl;

    return 0;
}
