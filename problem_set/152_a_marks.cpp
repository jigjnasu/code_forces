/*
  Contest : 152
  Problem A : Marks
  Author : Rakesh Kumar
  Date: 18/07/2020
*/

#include <bits/stdc++.h>

inline bool any_max(const std::string& marks, const std::string& max) {
    for (std::size_t i = 0; i < marks.size(); ++i)
        if (marks[i] == max[i])
            return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    std::cin.ignore();

    std::string d(m, '0');
    std::vector<std::string> students;
    while (n--) {
        std::string marks;
        std::getline(std::cin, marks);
        for (std::size_t i = 0; i < marks.size(); ++i)
            d[i] = std::max(d[i], marks[i]);
        students.emplace_back(marks);
    }

    std::size_t r = 0;
    for (std::size_t i = 0; i < students.size(); ++i)
        r += any_max(students[i], d);
    std::cout << r << std::endl;

    return 0;
}
