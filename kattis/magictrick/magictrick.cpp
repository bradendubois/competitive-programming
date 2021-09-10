#include <iostream>
#include <set>

int main() {

    std::string s;
    std::cin >> s;

    std::set<char> to_set;;
    for (auto c: s) {
        to_set.insert(c);
    }

    std::cout << (to_set.size() == s.size() ? 1 : 0) << std::endl;
}