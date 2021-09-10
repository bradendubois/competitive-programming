#include <iostream>

using namespace std;

int main() {

	int N, t = 1, prev = -1, cur;
	cin >> N;

	while (N--) {
		cin >> cur;
		if (prev != -1 && cur > prev) t++;
		prev = cur;
	}

	cout << t << endl;
}
