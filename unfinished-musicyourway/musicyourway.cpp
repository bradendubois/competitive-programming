#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

struct song {
    map<string, string> attribs;
    string selected;
};

bool compareSong(song a, song b) {
    if (isdigit(a.selected[0]))
        return stoi(a.attribs[a.selected]) < stoi(b.attribs[b.selected]);
    return a.attribs[a.selected] < b.attribs[b.selected];
}

int main() {

    string line, temp;
    getline(cin, line);
    stringstream conv(line);

    vector<string> attribs;
    while (conv.good()) {
        conv >> temp;
        attribs.push_back(temp);
    }

    getline(cin, line);
    int m = stoi(line);

    vector<song> songs;
    while (m--) {
        song newSong;
        getline(cin, line);
        stringstream songConv(line);
        for (int i = 0; i < attribs.size(); i++) {
            songConv >> temp;
            newSong.attribs[attribs[i]] = temp;
        } songs.push_back(newSong);
    }

    getline(cin, line);
    int n = stoi(line);

    while (n--) {
        getline(cin, line);
        for (auto & song : songs) {
            song.selected=line;
        }

        sort(songs.begin(), songs.end(), compareSong);
        for (auto attrib: attribs)
            cout << attrib << " ";
        cout << endl;
        for (auto song : songs) {
            for (auto attrib: attribs)
                cout << song.attribs[attrib] << " ";
            cout << endl;
        }  cout << endl;
    }
}
