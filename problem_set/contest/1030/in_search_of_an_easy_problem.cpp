/*
  Contest 1030
  Problem A : In search of an easy problem
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>
#include <string>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::string result = "EASY";
    while (n--) {
        int s = 0;
        scanf("%d", &s);

        if (s)
            result = "HARD";
    }
    printf("%s\n", result.c_str());

    return 0;
}
