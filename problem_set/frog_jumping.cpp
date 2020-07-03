/*
  Contest: 1077
  Problem A : Frog jumping
  Author : Rakesh Kumar
  Date: 21/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    int t = 0;
    std::cin >> t;

    while (t--) {
        ll a = 0;
        ll b = 0;
        ll k = 0;
        std::cin >> a >> b >> k;

        ll jump = 0;
        const ll j = k >> 1;
        if ((k & 1) == 1) {
            jump += (a * (j + 1));
            jump -= (b * j);
        } else {
            jump += (a * j);
            jump -= (b * j);
        }
        std::cout << jump << std::endl;
    }

    return 0;
}
