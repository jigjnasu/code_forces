/*
  Contest : 1073
  Problem B : Vasya and books
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    std::cin >> n;

    std::unordered_map<int, int> books;
    for (int i = 1; i <= n; ++i) {
        int b = 0;
        std::cin >> b;
        books[b] = i;
    }

    int top = 1;
    while (n--) {
        int b = 0;
        std::cin >> b;
        if (books[b] >= top) {
            std::cout << books[b] - top + 1 << " ";
            top = books[b] + 1;
        } else
            std::cout << "0 ";
    }
    std::cout << std::endl;

    return 0;
}
