/*
  Contest : 205
  Problem A : Little elephant and rozdil
  Author : Rakesh Kumar
  Date: 18/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0;
    std::cin >> n;
    ll cnt = 1;
    ll num = 0;
    ll pos = 1;
    ll dis = 0;
    std::cin >> dis;
    num = dis;
    for (ll i = 2; i <= n; ++i) {
        std::cin >> dis;
        if (dis < num) {
            num = dis;
            cnt = 1;
            pos = i;
        } else if (dis == num) {
            ++cnt;
        }
    }

    if (cnt == 1)
        std::cout << pos << std::endl;
    else
        std::cout << "Still Rozdil" << std::endl;

    return 0;
}
