/*
  Contest 43
  Problem A : Football
  Author : Rakesh Kumar
  Date: 20/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::unordered_map<std::string, int> teams;
    while (n--) {
        std::string t;
        std::getline(std::cin, t);
        ++teams[t];
    }

    int max = 0;
    std::string winner;
    for (auto it = teams.begin(); it != teams.end(); ++it) {
        if (it->second > max) {
            max = it->second;
            winner = it->first;
        }
    }

    std::cout << winner << std::endl;
    return 0;
}
