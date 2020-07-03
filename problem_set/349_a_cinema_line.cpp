/*
  Contest: 349
  Problem A : Cinema line
  Author : Rakesh Kumar
  Date: 21/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    int n = 0;
    std::cin >> n;

    std::string result = "YES";
    std::unordered_map<int, int> cash;
    while (n--) {
        int money = 0;
        std::cin >> money;

        int change = money - 25;
        if (change >= 50 && cash[50]) {
            change -= 50;
            --cash[50];
        }

        while (change >= 25 && cash[25]) {
            change -= 25;
            --cash[25];
        }

        if (change > 0) {
            result = "NO";
            break;
        }

        ++cash[money];
    }

    std::cout << result << std::endl;
    return 0;
}
