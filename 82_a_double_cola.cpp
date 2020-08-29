/*
  Contest 82
  Problem A : Double cola
  Author : Rakesh Kumar
  Date: 27/01/2020
*/

#include <bits/stdc++.h>

const std::vector<std::string> q = {
    "Sheldon",
    "Leonard",
    "Penny",
    "Rajesh",
    "Howard"
};

int main() {
    int n = 0;
    scanf("%d", &n);

    int d = 1;
    while (d * 5 < n) {
        n -= d * 5;
        d <<= 1;
    }

    printf("%s\n", q[(n - 1) / d].c_str());

    return 0;
}
