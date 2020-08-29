/*
  Contest 5
  Problem B : Cener alignment
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/01/2020
 */

#include <iostream>
#include <string>
#include <list>
#include <cmath>

void print_header(std::size_t size) {
    for (std::size_t i = 0; i < size; ++i)
        printf("*");
    printf("\n");
}

int main() {
    std::list<std::string> book;
    std::size_t max = 0;
    std::string line;

    while (std::getline(std::cin, line)) {
        if (line.size() > max)
            max = line.size();
        book.push_back(line);
    }

    print_header(max + 2);

    bool toggle = false;
    for (std::list<std::string>::const_iterator it = book.begin();
         it != book.end(); ++it) {
        printf("*");

        std::size_t limit = 0;
        std::size_t j = 0;
        // Spaces first
        limit = ((max - it->size()) >> 1);
        if ((max - it->size()) % 2) {
            if (toggle)
                ++limit;
            toggle = !toggle;
        }

        while (j < limit) {
            printf(" ");
            ++j;
        }

        // string
        printf("%s", it->c_str());
        j += it->size();

        // Spaces again
        while (j < max) {
            printf(" ");
            ++j;
        }
        printf("*\n");
    }

    print_header(max + 2);

    return 0;
}
