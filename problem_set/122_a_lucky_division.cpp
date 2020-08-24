/*
  Contest : 122
  Problem A : Lucky Division
  Author : Rakesh Kumar
  Date: 25/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    const std::vector<int> d = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n = 0;
    std::cin >> n;
    std::string r = "NO";
    for (int bhagyashalli : d) {
        if (n % bhagyashalli == 0) {
            r = "YES";
            break;
        }
    }
    std::cout << r << std::endl;


    return 0;
}
