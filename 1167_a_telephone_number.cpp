/*
  Contest: 1167
  Problem A : Telephone Number
  Author : Rakesh Kumar
  Date: 06/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    std::cin.ignore();
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();
        std::string number;
        std::getline(std::cin, number);
        const std::size_t pos = number.find("8");
        std::string result = "NO";
        if (n >= 11 && pos <= n - 11)
            result = "YES";
        std::cout << result << std::endl;
    }

    return 0;
}
