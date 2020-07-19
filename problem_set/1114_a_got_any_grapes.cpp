/*
  Contest : 1114
  Problem A : Got any grapes?
  Author : Rakesh Kumar
  Date: 20/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0, y = 0, z = 0;
    std::cin >> x >> y >> z;
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    std::string result = "NO";
    if (x <= a) {
        b += a - x;
        if (y <= b) {
            c += b - y;
            if (z <= c)
                result = "YES";
        }
    }
    std::cout << result << std::endl;

    return 0;
}
