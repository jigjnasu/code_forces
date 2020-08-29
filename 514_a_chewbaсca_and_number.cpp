/*
  Contest: 514
  Problem A : Chewbacca and number
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <bits/stdc++.h>

int main() {
    unsigned long long int x = 9;
    std::cin >> x;
    std::string s = std::to_string(x);

    for (std::size_t i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (i == 0 && s[i] >= '5' && s[i] <= '8')
            c = '9' - s[i] + '0';
        if (i > 0 && s[i] >= '5' && s[i] <= '9')
            c = '9' - s[i] + '0';
        s[i] = c;
    }

    std::cout << s << std::endl;

    return 0;
}
