/*
  Contest : 320
  Problem A : Magic Numbers
  Author : Rakesh Kumar
  Date: 04/10/2020
*/

#include <bits/stdc++.h>

std::string magic(int n) {
    std::string sn = std::to_string(n);
    for (char c : sn)
        if (!(c == '1' || c == '4'))
            return "NO";
    std::string r = "YES";
    std::size_t i = 0;
    while (i < sn.size()) {
        if (i + 2 < sn.size() && sn.substr(i, 3) == "144") {
            i += 3;
        } else if (i + 1 < sn.size() && sn.substr(i, 2) == "14") {
                i += 2;
        } else if (sn[i] == '1') {
            ++i;
        } else {
            r = "NO";
            break;
        }
    }
    return r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cout << magic(n) << std::endl;

    return 0;
}
