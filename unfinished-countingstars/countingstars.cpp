#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void recurseClean(vector<vector<char>> & image, int y, int x) {
    if (image[y][x] == '-'){
        image[y][x] = '.';
        if (y-1 >= 0) recurseClean(image, y-1, x);
        if (y+1 < image.size()) recurseClean(image, y+1, x);
        if (x-1 >= 0) recurseClean(image, y, x-1);
        if (x+1 < image[y].size()) recurseClean(image, y, x+1);
    }
}

int count (vector<vector<char>> & image) {
    
    int total = 0;
    
    for (int row = 0; row < image.size(); row++) {
        for (int col = 0; col < image[row].size(); col++) {
            if (image[row][col] == '-') {
                total++;
                recurseClean(image, row, col);
            }
        }
    }

    return total;
}

int main() {
    int m, n, test_case = 0;
    
    string line;

    while (getline(cin, line)) {
        
        test_case++;
        stringstream conv(line);
        conv >> m >> n;
        
        vector<vector<char>> image;
        
        while (m--) {
            
            vector<char> row_pixels;
            
            string row_line;
            getline(cin, row_line);
            stringstream row_conv(row_line);
            
            char cur [n];
            row_conv >> cur;
            for (auto c : cur) row_pixels.push_back(c);
            
            image.push_back(row_pixels);

            cerr << row_pixels.size() << endl;

        } 
        
        int total = count(image);
        cout << "Case " << test_case << ": " << total << endl;
    }
}