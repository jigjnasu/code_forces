/*
  Contest 1
  Problem B : Spreadsheet
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/01/2017
*/

#include <bits/stdc++.h>

std::string to_string(int n) {
    std::ostringstream os;
    os << n;

    return os.str();
}

std::string convert_to_row_column(const std::string& cell) {
    std::string result = "R";
    std::size_t i = 0;
    while (cell[i] >= 'A' && cell[i] <= 'Z')
        ++i;

    result += cell.substr(i, cell.size() - 1);

    int col = 0;
    int pow = 0;
    for (int j = i - 1; j >= 0; --j) {
        int p = 1;
        for (int k = 0; k < pow; ++k)
            p *= 26;
        col += p * (cell[j] - 'A' + 1);
        ++pow;
    }

    result.push_back('C');
    result += to_string(col);
    return result;
}

std::string convert_to_column_row(const std::string& cell) {
    std::string result;
    std::size_t pos = cell.find("C");
    int col = std::atoi(cell.substr(pos + 1, cell.size() - 1).c_str());

    while (col) {
        if (col % 26) {
            result.insert(result.begin(), (col % 26) + 'A' - 1);
        } else {
            result.insert(result.begin(), 'Z');
            --col;
        }
        col /= 26;
    }

    result += cell.substr(1, pos - 1);
    return result;
}

bool is_row_column(const std::string& cell) {
    if (cell[0] != 'R')
        return false;

    const std::size_t r_pos = cell.find("R");
    const std::size_t c_pos = cell.find("C");

    if (c_pos - r_pos <= 1)
        return false;

    for (int i = r_pos + 1; i < c_pos; ++i)
        if (!(cell[i] >= '0' && cell[i] <= '9'))
            return false;

    return true;
}

// First type BC23
// BC - column, 23 - row
// Second type R23C55
// 23 - row, 55 - column
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::string cell;
        std::getline(std::cin, cell);

        if (is_row_column(cell))
            std::cout << convert_to_column_row(cell) << std::endl;
        else
            std::cout << convert_to_row_column(cell) << std::endl;

    }

    return 0;
}
