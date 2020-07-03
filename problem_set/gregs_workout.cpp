/*
  Contest: 255
  Problem A : Greg's workout
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;

    std::vector<int> w(3, 0);

    for (int i = 0; i < n; ++i) {
        int e = 0;
        std::cin >> e;
        w[i % 3] += e;
    }

    if (w[0] > w[1] && w[0] > w[2])
        std::cout << "chest" << std::endl;
    if (w[1] > w[0] && w[1] > w[2])
        std::cout << "biceps" << std::endl;
    if (w[2] > w[0] && w[2] > w[1])
        std::cout << "back" << std::endl;

    return 0;
}
