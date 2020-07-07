/*
  Contest: 545
  Problem D : Queue
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

      std::vector<ll> q;
      while (n--) {
            int t = 0;
            std::cin >> t;
            q.emplace_back(t);
      }

      std::sort(q.begin(), q.end());
      ll s = 0;
      ll happy = 0;
      for (ll t : q) {
            if (s <= t) {
                  ++happy;
                  s += t;
            }
      }

      std::cout << happy << std::endl;

      return 0;
}
