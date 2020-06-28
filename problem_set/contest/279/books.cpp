/*
  Contest: 279
  Problem B : Books
  Author : Rakesh Kumar
  Date: 28/06/2020
*/

#include <bits/stdc++.h>

using ll = long long int;
const int m = 1e+5;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int e[m + 1] = {0};
    int n = 0;
    ll t = 0;
    std::cin >> n >> t;

    int v = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> v;
        e[i] = v;
    }

    int sol = 0;
    ll sum = 0;
    int j = -1;
    for (int i = 0; i < n; ++i) {
        sum += e[i];

        while (sum > t) {
            sum -= e[++j];
        }

        sol = std::max(sol, i - j);
    }

    std::cout << sol << std::endl;

    return 0;
}
