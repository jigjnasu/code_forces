/*
  Contest : 937
  Problem A : Olympiad
  Author : Rakesh Kumar
  Date: 16/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::set<int> r;
    while (n--) {
        int s = 0;
        std::cin >> s;
        if (s) r.insert(s);
    }
    std::cout << r.size() << std::endl;

    return 0;
}
