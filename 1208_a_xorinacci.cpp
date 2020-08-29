/*
  Contest: 1208
  Problem A : XORinacci
  Author : Rakesh Kumar
  Date: 15/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int a = 0;
        int b = 0;
        int n = 0;
        std::cin >> a >> b >> n;
        std::vector<int> v = {a, b, a ^ b};
        std::cout << v[n % 3] << std::endl;
    }

    return 0;
}
