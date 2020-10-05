/*
  Contest : 1225
  Problem A : Forgetting Things
  Author : Rakesh Kumar
  Date: 05/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a == b)
        std::cout << a << 1 << " " << b << 2 << std::endl;
    else if (a + 1 == b)
        std::cout << a << 9 << " " << b << 0 << std::endl;
    else if (a == 9 && b == 1)
        std::cout << a << " " << 10 << std::endl;
    else
        std::cout << -1 << std::endl;


    return 0;
}
