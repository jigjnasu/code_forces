/*
  Contest : 1059
  Problem A : Cashier
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    ll n = 0;
    ll L = 0;
    ll a = 0;
    std::cin >> n >> L >> a;

    std::vector<std::pair<ll, ll>> c;
    while (n--) {
        ll t = 0;
        ll l = 0;
        std::cin >> t >> l;
        c.emplace_back(std::make_pair(t, l));
    }

    if (c.size() == 0)
        std::cout << L / a << std::endl;
    else {
        ll breaks = 0;
        breaks += c[0].first / a;
        for (ll i = 1; i < c.size(); ++i) {
            const ll temp = c[i].first - (c[i - 1].first + c[i - 1].second);
            if (temp)
                breaks += temp / a;
        }
        const ll temp = L - (c[c.size() - 1].first + c[c.size() - 1].second);
        if (temp)
            breaks += temp / a;
        std::cout << breaks << std::endl;
    }

    return 0;
}
