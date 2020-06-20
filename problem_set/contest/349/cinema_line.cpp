/*
  Contest: 349
  Problem A : Cinema line
  Author : Rakesh Kumar
  Date: 21/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    long long int cash = 0;
    std::string result = "YES";
    while (n--) {
        int m = 0;
        std::cin >> m;
        if (result == "YES") {
            if (m > 25)
                cash = cash - (m - 25);
            if (cash < 0)
                result = "NO";
            cash += 25;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
