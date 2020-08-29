/*
  Contest : 721
  Problem A : One-dimensional Japanese Crossword
  Author : Rakesh Kumar
  Date: 25/07/2020
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

    std::vector<int> width;
    int w = 0;
    for (char c : s) {
        if (c == 'W') {
            if (w)
                width.emplace_back(w);
            w = 0;
        } else {
            ++w;
        }
    }

    if (w)
        width.emplace_back(w);

    std::cout << width.size() << std::endl;
    for (int w : width)
        std::cout << w << " ";
    std::cout << std::endl;

    return 0;
}
