/*
  Contest : 1141
  Problem A : Game 23
  Author : Rakesh Kumar
  Date : 26/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, m = 0;
    std::cin >> n >> m;

    ll r = -1;
    if (m % n == 0) {
        ll c = 0;
        ll d = m / n;
        while (d) {
            if (d == 1) {
                r = c;
                break;
            }

            if (d % 2 == 0) {
                d >>= 1; ++c;
            } else if (d % 3 == 0) {
                d /= 3; ++c;
            } else {
                break;
            }
        }
    }
    std::cout << r << std::endl;
    return 0;
}
