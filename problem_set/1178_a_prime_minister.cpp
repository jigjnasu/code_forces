/*
  Contest : 1178
  Problem A : Prime minister
  Author : Rakesh Kumar
  Date: 12/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<int> parties = {1};
    int seats = 0;
    std::cin >> seats;
    int total = seats, cp = seats;

    for (int i = 2; i <= n; ++i) {
        int s = 0;
        std::cin >> s;
        total += s;
        if (s <= (seats >> 1)) {
            parties.emplace_back(i);
            cp += s;
        }
    }

    if (seats > total >> 1)
        std::cout << 1 << std::endl << 1 << std::endl;
    else {
        if (parties.size() == 1 ||
            cp <= (total >> 1))
            std::cout << 0 << std::endl;
        else {
            std::cout << parties.size() << std::endl;
            for (int p : parties)
                std::cout << p << " ";
            std::cout << std::endl;
        }
    }
    return 0;
}
