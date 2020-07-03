/*
  Contest 208
  Problem A : Dubstep
  Author : Rakesh Kumar
  Date: 12/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::string r;
    std::size_t i = 0;
    while (i < line.size()) {
        if (i + 2 < line.size() && line.substr(i, 3) == "WUB") {
            i += 3;
            if (r.size() && r[r.size() - 1] != ' ')
                r += ' ';
        } else {
            r += line[i++];
        }
    }
    printf("%s\n", r.c_str());

    return 0;
}
