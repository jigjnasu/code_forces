/*
  Contest : 1230
  Problem A : Dawid and Bags of Candies
  Author : Rakesh Kumar
  Date: 04/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::vector<int> v(4, 0);
    std::cin >> v[0] >> v[1] >> v[2] >> v[3];
    std::sort(v.begin(), v.end());
    std::string r = "NO";
    if (v[0] + v[1] == v[2] + v[3])
        r = "YES";
    if (v[0] + v[1] + v[2] == v[3])
        r = "YES";
    if (v[0] + v[3] == v[1] + v[2])
        r = "YES";
    std::cout << r << std::endl;

    return 0;
}
