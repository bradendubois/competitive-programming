#include <iostream>

int main() {
    std::string s;
    bool flip = true;
    while (std::cin >> s) {
        if ((flip = !flip)) std::cout << s << std::endl;
    }
}

