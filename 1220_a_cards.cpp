/*
  Contest : 1220
  Problem A : A. Cards
  Author : Rakesh Kumar
  Date: 01/03/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> arr(2, 0);
    while(n--) {
        char c;
        std::cin >> c;
        if (c == 'n')
            ++arr[1];
        if (c == 'z')
            ++arr[0];
    }

    std::string r;
    for (int i = 0; i < arr[1]; ++i)
        r += "1 ";
    for (int i = 0; i < arr[0]; ++i)
        r += "0 ";
    std::cout << r.substr(0, r.size() - 1) << std::endl;

    return 0;
}
