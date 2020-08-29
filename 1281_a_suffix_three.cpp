/*
  Contest : 1281
  Problem A : Suffix three
  Author : Rakesh Kumar
  Date: 25/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    std::cin.ignore();
    while (t--) {
        std::string w;
        std::getline(std::cin, w);
        if (w.substr(w.size() - 2, 2) == "po")
            std::cout << "FILIPINO" << std::endl;
        else if (w.substr(w.size() - 4) == "desu" ||
                 w.substr(w.size() - 4) == "masu")
            std::cout << "JAPANESE" << std::endl;
        else
            std::cout << "KOREAN" << std::endl;
    }

    return 0;
}
