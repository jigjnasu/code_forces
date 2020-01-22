#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int x = 0;
    int y = 0;
    int z = 0;
    while (n--) {
        int a = 0;
        int b = 0;
        int c = 0;
        scanf("%d %d %d", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }

    std::string res = "NO";
    if (x == 0 && y == 0 && z == 0)
        res = "YES";
    printf("%s\n", res.c_str());

    return 0;
}
