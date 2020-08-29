/*
  Contest : 1005
  Problem A : Tanya and Stairways
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    int steps = 1;
    std::vector<int> s;
    int e = 0;
    std::cin >> e; --n;
    while (n--) {
        std::cin >> e;
        if (e == 1) {
            s.emplace_back(steps);
            steps = 0;
        }
        ++steps;
    }

    if (steps) s.emplace_back(steps);
    std::cout << s.size() << std::endl;
    for (int e : s)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}
