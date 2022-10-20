#include <iostream>
#include <string>
#include <algorithm>

std::string wide_lexicographic_shift(std::string str) {
    for (size_t i = 1; i < str.size(); i += 2) {
        str[i] += 1;
    }

    return str;
}

#define М(str) wide_lexicographic_shift(#str)

int main() {
    std::cout << М(ФТИ) << '\n';
}
