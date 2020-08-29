/*
  Contest: 141
  Problem A : Amusing joke
  Author : Rakesh Kumar
  Date: 25/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> a(26, 0);
    std::vector<int> b(26, 0);

    std::string w;
    std::getline(std::cin, w);
    for (char c : w)
        ++a[c - 'A'];
    std::getline(std::cin, w);
    for (char c : w)
        ++a[c - 'A'];
    std::getline(std::cin, w);
    for (char c : w)
        ++b[c - 'A'];

    std::string r = "YES";
    for (std::size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            r = "NO";
            break;
        }
    }

    std::cout << r << std::endl;

    return 0;
}
