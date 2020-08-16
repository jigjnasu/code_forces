/*
  Contest : 841
  Problem A : Generous Kefa
  Author : Rakesh Kumar
  Date: 17/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    std::cin.ignore();

    std::vector<int> v(26, 0);
    std::string s;
    std::getline(std::cin, s);
    for (char c : s)
        ++v[c - 'a'];

    std::string result = "YES";
    for (int e : v) {
        if (e && e != k) {
            result = "NO";
            break;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
