/*
  Contest : 1324
  Problem B : Yet Another Palindrome Problem
  Author : Rakesh Kumar
  Date: 31/07/2020
*/

#include <bits/stdc++.h>

std::string palindrome(const std::vector<int>& v) {
    std::string res = "NO";
    std::unordered_map<int, int> p;
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (p.find(v[i]) == p.end()) {
            p[v[i]] = i;
        } else {
            if (i - p[v[i]] > 1) {
                res = "YES";
                break;
            }
        }
    }
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    int t = 0;
    std::cin >> t;
    while (t--) {
        int a = 0;
        std::cin >> a;
        std::vector<int> v;
        while (a--) {
            int e = 0;
            std::cin >> e;
            v.emplace_back(e);
        }
        std::cout << palindrome(v) << std::endl;
    }

    return 0;
}
