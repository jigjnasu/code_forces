/*
  Contest 1
  Problem A : Theatre Square
  Author : Rakesh Kumar
  Date: 14/01/2020
 */

#include <iostream>

using ll = unsigned long long int;

int main() {
    ll m = 0;
    ll n = 0;
    ll a = 0;
    std::cin >> m >> n >> a;

    ll rows = m / a;
    if (m % a)
        ++rows;

    ll cols = n / a;
    if (n % a)
        ++cols;

    std::cout << rows * cols << std::endl;
    return 0;
}
