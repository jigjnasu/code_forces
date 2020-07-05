/*
  Contest: 1136
  Problem A : Nastya Is Reading a Book
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    std::cin >> n;
    std::vector<std::tuple<int, int>> book;
    while (n--) {
        int l = 0;
        int r = 0;
        std::cin >> l >> r;
        book.emplace_back(std::make_tuple(l, r));
    }

    int k = 0;
    std::cin >> k;
    int r = 0;
    for (const std::tuple<int, int>& c : book)
        if (k > std::get<1>(c))
            ++r;
    std::cout << book.size() - r << std::endl;

    return 0;
}
