/*
  Contest 1030
  Problem A : In search of an easy problem
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    int n = 0;
    std::cin >> n;

    std::string result = "EASY";
    while (n--) {
        int s = 0;
        std::cin >> s;

        if (s)
            result = "HARD";
    }
    std::cout << result << std::endl;

    return 0;
}
