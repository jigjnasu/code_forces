/*
  Contest : 734
  Problem A : Anton and danik
  Author : Rakesh Kumar
  Date: 21/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int a = 0, d = 0;
    while (n--) {
        char c;
        std::cin >> c;
        if (c == 'A') ++a;
        if (c == 'D') ++d;
    }

    if (a > d)
        std::cout << "Anton" << std::endl;
    else if (a < d)
        std::cout << "Danik" << std::endl;
    else
        std::cout << "Friendship" << std::endl;

    return 0;
}
