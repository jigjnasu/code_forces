/*
  Contest : 1005
  Problem B : Delete from the Left
  Author : Rakesh Kumar
  Date: 01/08/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string a;
    std::string b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);

    int c = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 && j >= 0 && a[i] == b[j]) {
        ++c;
        --i; --j;
    }
    std::cout << (a.size() - c) + (b.size() - c) << std::endl;

    return 0;
}
