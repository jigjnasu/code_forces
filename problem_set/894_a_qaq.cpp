/*
  Contest : 984
  Problem A : QAQ
  Author : Rakesh Kumar
  Date: 31/07/2020
*/

#include <bits/stdc++.h>

int count(const std::vector<int>& a, int s, int e) {
    int c = 0;
    int i = 0;
    while (i < static_cast<int>(a.size())) {
        if (a[i] > e)
            break;
        if (a[i] >= s && a[i] <= e)
            ++c;
        ++i;
    }
    return c;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::vector<int> q;
    std::vector<int> a;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'Q') q.emplace_back(i);
        if (s[i] == 'A') a.emplace_back(i);
    }

    int total = 0;
    for (int i = 0; i < static_cast<int>(q.size() - 1); ++i) {
        for (int j = i + 1; j < static_cast<int>(q.size()); ++j)
            total += count(a, q[i], q[j]);
    }
    std::cout << total << std::endl;

    return 0;
}
