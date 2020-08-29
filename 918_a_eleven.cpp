/*
  Contest: 918
  Problem A : Eleven
  Author : Rakesh Kumar
  Date: 10/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::string s(n, 'o');
    s[0] = 'O';
    int a = 1;
    int b = 1;
    while (1) {
        const int c = a + b;
        if (c > n)
            break;
        s[c - 1] = 'O';
        a = b;
        b = c;
    }
    std::cout << s << std::endl;
    return 0;
}
