#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool lex(string a, string b) {

	string al = a;
	string bl = b;

	transform(al.begin(), al.end(), al.begin(), ::tolower);
	transform(bl.begin(), bl.end(), bl.begin(), ::tolower);

    if (al.compare(0, bl.size(), bl) == 0 || bl.compare(0, al.size(), al) == 0) { return al.size() > bl.size();
	} else {
        return al < bl;
	}
}


int main() {

	int r, c;
	while (cin >> r >> c) {

		vector<string> words(c, "");

		string line;
		for (int i = 0; i < r; i++) {
			cin >> line;
			for (int j = 0; j < c; j++) {
				words[j] += line[j];
			}
		}

		sort(words.begin(), words.end(), lex);

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << words[j][i];
			}
			cout << endl;
		}
		cout << endl;
	}
}
