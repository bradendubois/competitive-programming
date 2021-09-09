#include <iostream>

int main() {

    int N, M, d, r;
    std::cin >> N >> M;

    d = M / N;
    r = M % N;

    while (N--) {
        for (int _ = d; _; _--) {
            std::cout << "*";
        }

        if (r-- > 0) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}
