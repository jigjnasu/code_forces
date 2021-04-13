/*
  Contest : 1388
  Problem A : Captain Flint and Crew Recruitment
  Author : Rakesh Kumar
  Date: 13/04/2021
*/

#include <bits/stdc++.h>

std::vector<int> primes() {
    std::vector<bool> t(101, true);
    for (std::size_t i = 2; i < t.size(); ++i)
        for (std::size_t j = i << 1; j < t.size(); j += i)
            t[j] = false;
    std::vector<int> p;
    for (std::size_t i = 2; i < t.size(); ++i)
        if (t[i])
            p.emplace_back(i);
    return p;
}

std::vector<int> near_primes(const std::vector<int>& p) {
    std::vector<int> np;
    for (std::size_t i = 0; i < p.size(); ++i)
        for (std::size_t j = i + 1; j < p.size(); ++j)
            np.emplace_back(p[i] * p[j]);

    return np;
}

inline void print(const std::vector<int>& p) {
    printf("-----------------------------------------------\n");
    for (int v : p)
        printf("%d ", v);
    printf("\n-----------------------------------------------\n");
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::vector<int> np = near_primes(primes());
    std::sort(np.begin(), np.end());
    int t = 0;
    std::cin >> t;
    while (t--) {
        int x = 0;
        std::cin >> x;
        bool found = false;
        for (std::size_t i = 0; i < np.size(); ++i) {
            for (std::size_t j = i + 1; j < np.size(); ++j) {
                for (std::size_t k = j + 1; k < np.size(); ++k) {
                    const int sum = np[i] + np[j] + np[k];
                    if (sum < x) {
                        const int last = x - sum;
                        if (np[i] != last &&
                            np[j] != last &&
                            np[k] != last) {
                            std::cout << "YES" << std::endl;
                            std::cout << np[i] << " " << np[j] << " " << np[k] << " " << last << std::endl;
                            found = true;
                            goto res;
                        }
                    } else {
                        goto res;
                    }
                }
            }
        }

    res:
        if (!found)
            std::cout << "NO" << std::endl;
    }

    return 0;
}
