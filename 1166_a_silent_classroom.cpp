/*
  Contest : 1166
  Problem A : Silent Classroom
  Author : Rakesh Kumar
  Date: 24/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::vector<int> d(26, 0);
    while (n--) {
        std::string naam;
        std::getline(std::cin, naam);
        ++d[naam[0] - 'a'];
    }

    int x = 0;
    for (int c : d) {
        const int a = c >> 1;
        const int b = c - a;
        x += (a * (a - 1)) >> 1;
        x += (b * (b - 1)) >> 1;
    }
    std::cout << x << std::endl;

    return 0;
}
