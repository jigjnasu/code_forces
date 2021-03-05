/*
  Contest : 1373
  Problem B : 01 Game
  Author : Rakesh Kumar
  Date: 01/03/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        int arr[2] = {0};
        for (char c : s)
            ++arr[c - '0'];
        if (std::min(arr[0], arr[1]) & 1)
            std::cout << "DA" << std::endl;
        else
            std::cout << "NET" << std::endl;
    }

    return 0;
}
