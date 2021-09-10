#include <iostream>

int main() {

    int wc, hc, ws, hs;
    std::cin >> wc >> hc >> ws >> hs;

    std::cout << (wc - ws >= 2 && hc - hs >= 2 ? 1 : 0) << std::endl;

}