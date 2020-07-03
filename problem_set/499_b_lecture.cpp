/*
  Contest: 499
  Problem B : Lecture
  Author : Rakesh Kumar
  Date: 20/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    std::cin.ignore();

    std::unordered_map<std::string, std::string> d;
    while (m--) {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream iss(line);
        std::string first, second;
        iss >> first >> second;
        d[first] = second.size() < first.size() ? second : first;
    }

    std::string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
    std::string word;
    while (iss >> word)
        std::cout << d[word] << " ";
    std::cout << std::endl;


    return 0;
}
