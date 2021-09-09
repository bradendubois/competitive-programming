#include <iostream>

int main() {

    int idx = 0, f = 0, s = 0;
    char c;

    while (std::cin >> c) {
        if (c == ')' && (s == 1 || s == 2)) {
            std::cout << f << std::endl;
            s = 0;
            f = idx;
        } else if (c == ':' || c == ';') {
            s = 1;
            f = idx;
        } else if (c == '-' && s == 1) {
            s = 2;
        } else {
            s = 0;
        }

        idx++;
    }
}

