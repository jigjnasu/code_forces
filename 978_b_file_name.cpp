/*
  Contest : 978
  Problem B : File Name
  Author : Rakesh Kumar
  Date: 01/02/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::string s;
    std::cin >> s;
    bool x_start = false;
    int count = 0;
    int total = 0;
    for (char c : s) {
        if (c == 'x') {
            if (x_start) {
                ++count;
            } else {
                x_start = true;
                count = 1;
            }
        } else {
            x_start = false;
            total += std::max(0, count - 2);
            count = 0;
        }
    }
    total += std::max(0, count - 2);
    std::cout << total << std::endl;

    return 0;
}
