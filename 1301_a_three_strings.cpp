/*
  Contest: 1301
  Problem A : Three strings
  Author : Rakesh Kumar
  Date: 01/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::string a;
        std::string b;
        std::string c;
        std::getline(std::cin, a);
        std::getline(std::cin, b);
        std::getline(std::cin, c);

        std::string result = "YES";
        for (std::size_t i = 0; i < a.size(); ++i) {
            if (!(c[i] == a[i] || c[i] == b[i])) {
                result = "NO";
                break;
            }
        }
        std::cout << result << std::endl;
    }

    return 0;
}
