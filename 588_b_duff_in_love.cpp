/*
  Contest : 588
  Problem B : Duff in love
  Author : Rakesh Kumar
  Date: 11/07/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

inline void print(const std::vector<ull>& v) {
    std::cout << "-----------------------------------------------------" << std::endl;
    for (const ull& e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
}

inline std::vector<ull> divisors(ull n) {
    std::vector<ull> d = {1, n};
    for (ull i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            d.emplace_back(i);
            const ull t = n / i;
            if (t != i && n % t == 0)
                d.emplace_back(t);
        }
    }
    return d;
}

inline bool lovely(const std::vector<ull>& d, const ull& n) {
    for (std::size_t i = 1; d[i] <= std::sqrt(n); ++i) {
        const ull t = d[i] * d[i];
        if (std::find(d.begin(), d.end(), t) != d.end() && n % t == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    ull n = 0;
    std::cin >> n;
    if (n == 1) {
        std::cout << 1 << std::endl;
    } else {
        std::vector<ull> d = divisors(n);
        std::sort(d.begin(), d.end());
        for (int i = d.size() - 1; i >= 0; --i) {
            if (lovely(d, d[i])) {
                std::cout << d[i] << std::endl;
                break;
            }
        }
    }

    return 0;
}
