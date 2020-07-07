/*
  Contest: 835
  Problem A : Key races
  Author : Rakesh Kumar
  Date: 08/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int s = 0;
    int v1 = 0;
    int v2 = 0;
    int t1 = 0;
    int t2 = 0;
    std::cin >> s >> v1 >> v2 >> t1 >> t2;

    const int x = (t1 << 1) + (s * v1);
    const int y = (t2 << 1) + (s * v2);
    if (x == y)
        std::cout << "Friendship" << std::endl;
    else if (x < y)
        std::cout << "First" << std::endl;
    else
        std::cout << "Second" << std::endl;

    return 0;
}
