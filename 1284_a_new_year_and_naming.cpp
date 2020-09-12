/*
  Contest : 1284
  Problem A : New Year and Naming
  Author : Rakesh Kumar
  Date: 13/09/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    std::cin.ignore();
    std::vector<std::string> vn;
    std::vector<std::string> vm;
    std::string s;
    std::getline(std::cin, s);
    std::istringstream nss(s);
    while (nss >> s)
        vn.emplace_back(s);
    std::getline(std::cin, s);
    std::istringstream mss(s);
    while (mss >> s)
        vm.emplace_back(s);
    int t = 0;
    std::cin >> t;
    while (t--) {
        int p = 0;
        std::cin >> p; --p;
        std::cout << vn[p % n] + vm[p % m] << std::endl;
    }

    return 0;
}
