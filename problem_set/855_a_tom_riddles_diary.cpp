/*
  Contest: 855
  Problem A : Tom riddle's diary
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::unordered_map<std::string, bool> you_know_who;
    while (n--) {
        std::string name;
        std::getline(std::cin, name);
        if (you_know_who.find(name) == you_know_who.end()) {
            you_know_who[name] = true;
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    }

    return 0;
}
