/*
  Contest : 776
  Problem A : A Serial killer
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    std::string a, b;
    iss >> a >> b;
    std::cout << a << " " << b << std::endl;

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    while (n--) {
        std::getline(std::cin, line);
        std::istringstream iss(line);
        std::string p, q;
        iss >> p >> q;
        if (p == a)
            a = q;
        if (p == b)
            b = q;
        std::cout << a << " " << b << std::endl;
    }

    return 0;
}
