/*
  Contest : 977
  B. Two-gram
  Author : Rakesh Kumar
  Date: 02/09/2020
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
    std::unordered_map<std::string, int> d;
    for (std::size_t i = 0; i < s.size() - 1; ++i)
        ++d[s.substr(i, 2)];
    int max = 0;
    std::string r;
    for (const auto& p : d) {
        if (p.second > max) {
            r = p.first;
            max = p.second;
        }
    }
    std::cout << r << std::endl;

    return 0;
}
