/*
  Contest : 1334
  Problem B : Middle Class
  Author : Rakesh Kumar
  Date: 04/02/2021
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, x = 0;
        std::cin >> n >> x;

        std::vector<int> v;
        while (n--) {
            int s = 0;
            std::cin >> s;
            v.emplace_back(s);
        }

        std::sort(v.begin(), v.end());
        ull sum = 0, res = 0;
        for (int i = v.size() - 1; i >= 0; --i) {
            sum += v[i];
            const double avg = sum / (v.size() - i);
            if (avg >= x)
                ++res;
            else
                break;
        }
        std::cout << res << std::endl;
    }

    return 0;
}
