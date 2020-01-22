#include <bits/stdc++.h>

int find(const std::string& str, char c, int pos) {
    for (std::size_t i = pos; i < str.size(); ++i)
        if (str[i] == c)
            return i;
    return -1;
}

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::string res = "YES";
    const std::string h = "hello";
    int pos = 0;
    for (char c : h) {
        const int p = find(str, c, pos);
        if (p == -1) {
            res = "NO";
            break;
        }
        pos = p + 1;
    }

    std::cout << res << std::endl;

    return 0;
}
