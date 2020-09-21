/*
  Contest : 330
  Problem A : Cakeminator
  Author : Rakesh Kumar
  Date: 21/09/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<std::vector<bool>>& yummy) {
    std::cout << "--------------------------------------------------" << std::endl;
    for (const std::vector<bool>& v : yummy) {
        for (bool b : v)
            std::cout << b << " ";
        std::cout << std::endl;
    }
    std::cout << "--------------------------------------------------" << std::endl;
}

inline bool row(const std::string& s) {
    for (char c : s)
        if (c == 'S')
            return false;
    return true;
}

inline bool col(const std::vector<std::string>& grid, std::size_t col) {
    for (std::size_t r = 0; r < grid.size(); ++r)
        if (grid[r][col] == 'S')
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int r = 0, c = 0;
    std::cin >> r >> c;
    std::cin.ignore();

    std::vector<std::string> grid;
    int row_count = 0;
    while (r--) {
        std::string s;
        std::getline(std::cin, s);
        grid.emplace_back(s);
        if (row(s)) ++row_count;
    }
    int col_count = 0;
    for (std::size_t c = 0; c < grid[0].size(); ++c)
        if (col(grid, c)) ++col_count;
    std::cout << (row_count * grid[0].size()) + (col_count * (grid.size() - row_count)) << std::endl;

    return 0;
}
