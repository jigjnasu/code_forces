#include <cstdio>

int main() {
    int weight = 0;
    scanf("%d", &weight);

    if (weight > 2) {
        if (weight % 2)
            printf("NO\n");
        else
            printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
