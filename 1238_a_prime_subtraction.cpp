/*
  Contest: 1238
  Problem A : Prime subtraction
  Author : Rakesh Kumar
  Date: 07/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
      std::ios_base::sync_with_stdio(false);
      std::cin.tie(0);
      int n = 0;
      std::cin >> n;

      std::vector<ll> input;
      while (n--) {
            ll x = 0;
            ll y = 0;
            std::cin >> x >> y;
            if (x - y == 1)
                  std::cout << "NO" << std::endl;
            else
                  std::cout << "YES" << std::endl;
      }

      return 0;
}
