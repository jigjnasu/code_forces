/*
  Contest 4
  Problem C : Registration system
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/01/2020
 */

#include <cstdio>
#include <string>
#include <sstream>
#include <map>

int main() {
    std::map<std::string, int> dictionary;
    int N = 0;
    scanf("%d", &N);

    while (N--) {
        char name[64] = { 0 };
        scanf("%s", &name);

        ++dictionary[name];

        const int counter = dictionary[name];
        if (counter == 1) {
            printf("OK\n");
        } else {
            const std::string temp = name + std::to_string(counter - 1);
            printf("%s\n", temp.c_str());
        }
    }

    return 0;
}
