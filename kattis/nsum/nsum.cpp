#include <iostream>

int main() {
    int t, c, sum = 0;
    std::cin >> t;
    while ((std::cin >> t)) sum += t;
    std::cout << sum << std::endl;
}
