/*
  Contest : 709
  Problem A : Juicer
  Author : Rakesh Kumar
  Date: 07/07/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n = 0;
    int b = 0;
    int d = 0;
    std::cin >> n >> b >> d;

    int w = 0;
    int t = 0;
    while (n--) {
        int o = 0;
        std::cin >> o;
        if (o <= b) {
            t += o;
            if (t > d) {
                ++w; t = 0;
            }
        }
    }

    std::cout << w << std::endl;

    return 0;
}
