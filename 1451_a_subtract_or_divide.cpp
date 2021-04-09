/*
  Contest : 1451
  Problem A : Subtract or Divide
  Author : Rakesh Kumar
  Date: 09/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        int r = 0;
        if (n <= 3)
            r = n - 1;
        else if (n % 2 == 0)
            r = 2;
        else
            r = 3;
        std::cout << r << std::endl;
    }

    return 0;
}
