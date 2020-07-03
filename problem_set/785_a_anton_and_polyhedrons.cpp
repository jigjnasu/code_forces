/*
  Contest : 785
  Problem A : Anton and polyhedrons
  Author : Rakesh Kumar
  Date: 15/06/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::unordered_map<std::string, int> d = { {"Tetrahedron", 4},
                                               {"Cube", 6},
                                               {"Octahedron", 8},
                                               {"Dodecahedron", 12},
                                               {"Icosahedron", 20}};

    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    int t = 0;
    while (n--) {
        std::string type;
        std::getline(std::cin, type);
        t += d[type];
    }

    std::cout << t << std::endl;

    return 0;
}
