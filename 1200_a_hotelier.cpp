/*
  Contest : 1200
  Problem A : Hotelier
  Author : Rakesh Kumar
  Date: 28/04/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n=0;
    std::cin>>n;
    std::string hotel(10, '0');
    std::string i;
    std::cin>>i;
    for (char c : i) {
        if (c=='L') {
            for (int i=0; i<10; ++i) {
                if (hotel[i]=='0') {
                    hotel[i]='1';
                    break;
                }
            }
        } else if (c=='R') {
            for (int i=9; i>=0; --i) {
                if (hotel[i]=='0') {
                    hotel[i]='1';
                    break;
                }
            }
        } else {
            const int index = c-'0';
            hotel[index]=((hotel[index]-'0')^1) + '0';
        }
    }
    std::cout << hotel << std::endl;

    return 0;
}
