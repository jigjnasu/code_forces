/*
  Contest: 25
  Problem A : IQ Test
  Author : Rakesh Kumar
  Date: 26/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.ignore(0);
    int n = 0;
    std::cin >> n;

    std::vector<std::tuple<int, int>> v;
    v.push_back(std::make_tuple(0, 0));
    v.push_back(std::make_tuple(0, 0));

    for (int i = 1; i <= n; ++i) {
        int e = 0;
        std::cin >> e;
        const int p = (e & 1);
        ++std::get<0>(v[p]);
        std::get<1>(v[p]) = i;
    }

    if (std::get<0>(v[0]) == 1)
        std::cout << std::get<1>(v[0]) << std::endl;
    else
        std::cout << std::get<1>(v[1]) << std::endl;

    return 0;
}
