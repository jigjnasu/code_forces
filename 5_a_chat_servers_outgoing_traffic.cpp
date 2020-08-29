/*
  Contest 5
  Problem A : Chat servers outgoing traffic
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/01/2020
 */

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> data;

    while (1) {
        std::string line;
        std::getline(std::cin, line);

        if (!line.size())
            break;

        data.push_back(line);
    }

    unsigned long long int traffic = 0;
    int online_members = 0;
    for (int i = 0; i < data.size(); ++i) {
        if (data[i][0] == '+')
            ++online_members;
        else if (data[i][0] == '-')
            --online_members;
        else
            traffic += online_members * (data[i].size() - data[i].find(":") - 1);
    }

    std::cout << traffic << std::endl;

    return 0;
}
