/*
  Contest 69
  Problem A : Combination lock
  Author : Rakesh Kumar
  Date: 540/01/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string a;
    std::string b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);

    int t = 0;
    for (int i = 0; i < n; ++i) {
        const int x = a[i] - '0';
        const int y = b[i] - '0';
        const int a = std::abs(x - y);
        const int b = std::abs(9 - x) + y + 1;
        const int c = std::abs(9 - y) + x + 1;
        t += std::min(std::min(a, b), c);
    }

    printf("%d\n", t);

    return 0;
}
