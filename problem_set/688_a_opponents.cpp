/*
  Contest: 688
  Problem A : Opponents
  Author : Rakesh Kumar
  Date: 10/06/2020
*/

#include <bits/stdc++.h>

int main() {
      std::ios_base::sync_with_stdio(false);
      std::cin.tie(0);

      int n = 0;
      int d = 0;
      std::cin >> n >> d;
      std::cin.ignore();

      int days = 0;
      int count = 0;
      std::string w(n, '1');
      while (d--) {
            std::string s;
            std::getline(std::cin, s);
            if (s == w) {
                  days = std::max(count, days);
                  count = 0;
                  continue;
            }
            ++count;
      }

      std::cout << std::max(days, count) << std::endl;
      return 0;
}
