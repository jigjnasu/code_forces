/*
  Contest 96
  Problem A : Football
  Author : Rakesh Kumar
  Date: 17/01/2020
*/

#include <bits/stdc++.h>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::string result = "NO";
    std::size_t pos = str.find("0000000");
    if (pos != std::string::npos)
        result = "YES";
    pos = str.find("1111111");
    if (pos != std::string::npos)
        result = "YES";
    std::cout << result << std::endl;

    return 0;
}
