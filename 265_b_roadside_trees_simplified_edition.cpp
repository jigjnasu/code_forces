/*
  Contest : 265
  Problem B : Roadside Trees (Simplified Edition)
  Author : Rakesh Kumar
  Date: 23/10/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int mulya = n + n - 1;
    int lambai_pichla_vriksh = 0;
    while (n--) {
        int lambai = 0;
        std::cin >> lambai;
        mulya += std::abs(lambai - lambai_pichla_vriksh);
        lambai_pichla_vriksh = lambai;
    }
    std::cout << mulya << std::endl;

    return 0;
}
