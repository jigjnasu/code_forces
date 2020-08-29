/*
  Contest: 987
  Problem A : Infinity gauntlet
  Author : Rakesh Kumar
  Date: 08/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::unordered_map<std::string, std::string> infinity = {{"purple", "Power"},
                                                             {"green", "Time"},
                                                             {"blue", "Space"},
                                                             {"orange", "Soul"},
                                                             {"red", "Reality"},
                                                             {"yellow", "Mind"}};

    int m = 0;
    std::cin >> m;
    std::cin.ignore();
    std::string colors;
    for (int i = 0; i < m; ++i) {
        std::string c;
        std::getline(std::cin, c);
        colors += c + " ";
    }

    std::cout << infinity.size() - m << std::endl;
    for (auto it = infinity.begin(); it != infinity.end(); ++it)
        if (colors.find(it->first) == std::string::npos)
            std::cout << it->second << std::endl;
    return 0;
}
