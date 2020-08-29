/*
  Contest : 151
  Problem A : Soft Drinking
  Author : Rakesh Kumar
  Date: 28/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0, l = 0, c = 0, d = 0, p = 0, nl = 0, np = 0;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int taral_padarth = k * l;
    int nimbu_ke_tukde = c * d;
    const int x = (taral_padarth / nl) / n;
    const int y = nimbu_ke_tukde / n;
    const int z = (p / np) / n;
    std::cout << std::min(x, std::min(y, z)) << std::endl;

    return 0;
}
