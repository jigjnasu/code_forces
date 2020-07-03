/*
  Contest: 1341
  Problem A : Nastya and rice
  Author : Rakesh Kumar
  Date: 21/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        std::cin >> n >> a >> b >> c >> d;

        std::string result = "Yes";
        if ((((a - b) * n) > (c + d)) ||
            (((a + b) * n) < (c - d)))
            result = "No";

        std::cout << result << std::endl;
    }

    return 0;
}
