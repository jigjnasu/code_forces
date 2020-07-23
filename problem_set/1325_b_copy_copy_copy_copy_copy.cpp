/*
  Contest : 1325
  Problem B : CopyCopyCopyCopyCopy
  Author : Rakesh Kumar
  Date: 23/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::set<ll> s;
        while (n--) {
            ll x = 0;
            std::cin >> x;
            s.insert(x);
        }
        std::cout << s.size() << std::endl;
    }

    return 0;
}
