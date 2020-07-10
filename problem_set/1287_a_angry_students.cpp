/*
  Contest: 1287
  Problem A : Angry students
  Author : Rakesh Kumar
  Date: 10/07/2020
*/

#include <bits/stdc++.h>

inline std::string check(const std::string& s) {
      std::string r;
      r.push_back(s[0]);
      for (std::size_t i = 1; i < s.size(); ++i) {
            if (s[i - 1] == 'A' || s[i] == 'A')
                  r.push_back('A');
            else
                  r.push_back('P');
      }
      return r;
}

int main() {
      std::ios_base::sync_with_stdio(false);
      std::cin.tie(0);

      int t = 0;
      std::cin >> t;
      std::cin.ignore();
      while (t--) {
            int n = 0;
            std::cin >> n;
            std::cin.ignore();
            std::string s;
            std::getline(std::cin, s);

            int count = 0;
            while (1) {
                  const std::string r = check(s);
                  if (s == r)
                        break;
                  s = r;
                  ++count;
            }
            std::cout << count << std::endl;
      }

      return 0;
}
