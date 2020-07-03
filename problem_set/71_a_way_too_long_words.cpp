/*
  Contest : 71
  Problem A : Way too long
  Author : Rakesh Kumar
  Date: 14/06/2020
*/

#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string w;
        std::getline(std::cin, w);
        if (w.size() > 10) {
            std::string t;
            t += w[0];
            t += std::to_string(w.size() - 2);
            t += w[w.size() - 1];
            w = t;
        }
        std::cout << w << std::endl;
    }

    return 0;
}
