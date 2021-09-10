#include <iostream>
#include <stack>

int main() {

    std::stack<int> s;
    int n, temp;

    std::cin >> n;

    while (n--) {
        std::cin >> temp;
        s.push(temp);
    }

    while (s.size()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}