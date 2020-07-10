/*
  Contest: 697
  Problem A : pineapple incident
  Author : Rakesh Kumar
  Date: 10/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    ll t = 0;
    ll s = 0;
    ll x = 0;
    std::cin >> t >> s >> x;

    std::string result = "NO";
    if (t == x) {
        result = "YES";
    } else if (x > t) {
        double it = (x - t) / static_cast<double>(s);
         if (it && it == static_cast<ll>(it))
            result = "YES";
        it = (x - 1 - t) / static_cast<double>(s);
        if (it && it == static_cast<ll>(it))
            result = "YES";
    }
    std::cout << result << std::endl;

    return 0;
}
