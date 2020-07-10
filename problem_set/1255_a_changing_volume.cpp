/*
  Contest: 1255
  Problem A : Changing volume
  Author : Rakesh Kumar
  Date: 10/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
      std::ios_base::sync_with_stdio(false);
      std::cin.tie(0);

      int t = 0;
      std::cin >> t;
      while (t--) {
            ll a = 0;
            ll b = 0;
            std::cin >> a >> b;
            ll d = std::abs(a - b);
            ll t = 0;
            if (d >= 5) {
                  t = d / 5;
                  if (d % 5 > 0)
                        t++;
                  if (d % 5 > 2)
                        t++;
            } else if (d >= 2 && d <= 4) {
                  t = d / 2;
                  if (d % 2)
                        ++t;
            } else {
                  t = d;
            }
            std::cout << t << std::endl;
      }

      return 0;
}
