
/*
  Contest : 918
  Problem B : Radio Station
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    std::cin.ignore();

    std::unordered_map<std::string, std::string> servers;
    while (n--) {
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        std::string server, ip;
        iss >> server >> ip;
        servers[ip] = server;
    }

    while (m--) {
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        std::string command, ip;
        iss >> command >> ip;
        std::cout << command << " " << ip << " #" << servers[ip.substr(0, ip.size() - 1)] << std::endl;
    }

    return 0;
}
