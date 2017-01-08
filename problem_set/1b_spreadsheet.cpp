/*
  1B Spreadsheets, problem from Codeforces.com
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 8th, Jan 2017
 */

#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>

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

int main() {
    int t = 0;
    scanf("%d", &t);
    std::cin.ignore();

    while (t--) {
        std::string cell;
        std::getline(std::cin, cell);

        if (is_row_column(cell))
            printf("%s\n", convert_to_column_row(cell).c_str());
        else
            printf("%s\n", convert_to_row_column(cell).c_str());

    }
    
    return 0;
}
