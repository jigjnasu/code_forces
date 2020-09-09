/*
  Contest : 1397
  Problem A : Juggling Letters
  Author : Rakesh Kumar
  Date: 09/09/2020
*/

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    std::cout << "---------------------------------------------------" << std::endl;
    for (int e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    std::cin.ignore();
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();
        std::vector<int> v(26, 0);
        for (int i = 0; i < n; ++i) {
            std::string s;
            std::getline(std::cin, s);
            for (char c : s)
                ++v[c - 'a'];
        }
        //print(v);
        std::string r = "yes";
        for (int e : v) {
            if (e % n) {
                r = "no";
                break;
            }
        }
        std::cout << r << std::endl;
    }

    return 0;
}
