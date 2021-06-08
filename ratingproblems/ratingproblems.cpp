#include <iostream>
#include <vector>

int main() {

    int n, k, i;
    double t, rating = 0.0;

    std::cin >> n >> k;

    i = k;

    while (i--) {
        std::cin >> t;
        rating += t;
    }

    double skew = 3 * (n - k);

    std::cout << (rating - skew) / n << " " << (rating + skew) / n<< std::endl;
}