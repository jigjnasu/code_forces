/*
  Contest 26
  Problem A : Almost prime
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>
#include <vector>
#include <cmath>

int count(int n, const std::vector<int>& primes, const std::vector<bool>& V) {
    int c = 0;
    for (std::size_t i = 0; primes[i] < n; ++i)
        if (n % primes[i] == 0)
            ++c;
    return c;
}

int main() {
    std::vector<bool> V(3001, true);
    for (std::size_t i = 2; i < V.size(); ++i) {
        if (V[i]) {
            for (std::size_t j = i << 1; j < V.size(); j += i)
                V[j] = false;
        }
    }

    std::vector<int> primes;
    for (std::size_t i = 2; i < V.size(); ++i)
        if (V[i])
            primes.push_back(i);

    int n = 0;
    scanf("%d", &n);

    int c = 0;
    for (int i = 6; i <= n; ++i) {
        const int r = count(i, primes, V);
        if (r == 2)
            ++c;
    }
    printf("%d\n", c);


    return 0;
}
