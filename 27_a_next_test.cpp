/*
  Contest 27
  Problem A : Next test
  Author : Rakesh Kumar
  Date: 15/01/2020
*/

#include <cstdio>
#include <vector>

int main() {
    std::vector<bool> V(3000, false);
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int e = 0;
        scanf("%d", &e);
        V[e - 1] = true;
    }

    int r = 3001;
    for (std::size_t i = 0; i < V.size(); ++i) {
        if (V[i] == false) {
            r = i + 1;
            break;
        }
    }

    printf("%d\n", r);

    return 0;
}
