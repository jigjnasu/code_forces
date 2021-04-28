/*
  Contest : 1440
  Problem A : Buy the string
  Author : Rakesh Kumar
  Date: 28/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int t = 0;
    std::cin >> t;
    while (t--) {
        int n=0, c0=0, c1=0, h=0, z=0, o=0, t=0;
        std::cin>>n>>c0>>c1>> h;
        std::string s;
        std::cin>>s;
        for (char c : s) {
            if (c=='0') {
                ++z; t+=c0;
            } else {
                ++o; t+=c1;
            }
        }
        std::cout<<std::min(t, std::min(h*o + n*c0, h*z + n*c1))<<std::endl;
    }

    return 0;
}
