/*
  Contest : 681
  Problem A : A good contest
  Author : Rakesh Kumar
  Date: 17/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string result = "NO";
    while (n--) {
        std::string s;
        std::getline(std::cin, s);
        std::string h;
        int ss = 0;
        int fs = 0;
        std::istringstream iss(s);
        iss >> h >> ss >> fs;
        if (ss >= 2400 && ((fs - ss) > 0))
            result = "YES";
    }
    std::cout << result << std::endl;

    return 0;
}
