/*
  Contest : 219
  Problem A :  k-String
  Author : Rakesh Kumar
  Date: 23/10/2020
*/

#include <bits/stdc++.h>

inline bool k_string(const std::vector<int>& v, int k) {
    for (int e : v)
        if (e && e % k != 0)
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0;
    std::cin >> k;
    std::cin.ignore();

    std::string s;
    std::getline(std::cin, s);

    std::vector<int> akshar(26, 0);
    for (char c : s)
        ++akshar[c - 'a'];
    std::string r = "-1";
    if (k_string(akshar, k)) {
        std::string t;
        for (std::size_t i = 0; i < akshar.size(); ++i) {
            if (akshar[i]) {
                for (int j = 0; j < akshar[i] / k; ++j)
                    t += i + 'a';
            }
        }
        std::string temp;
        for (int i = 0; i < k; ++i)
            temp += t;
        r = temp;
    }
    std::cout << r << std::endl;

    return 0;
}
