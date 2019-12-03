#include <iostream>
#include <fstream>
#include <stdio.h>
#include <dirent.h>

struct dirent *entry = nullptr;

using namespace std;

int main () {

    DIR *dp = nullptr;
    ofstream readme;
    readme.open ("README.md");
    
    readme << "# competitive-programming\n\nThis is a collection of solutions to problems from [Kattis](https://open.kattis.com) that I do in my free time.\n\n";
    
    readme << "**Total Solutions**: ";
    int total = 0;
    
    dp = opendir("./");
    if (dp != nullptr) {
        while (entry = readdir(dp)) {
            string name = (entry->d_name);
            if (name.find("unfinished-") == string::npos && name.at(0) != '.' && entry->d_type == DT_DIR) 
                total++; 
        }
    }
    closedir(dp);

    readme << total << "\n\n";
    
    readme << "## Competitive Programming\n\n";
    readme << "A great resource to learn from from and improve at competitive programming is the book, [Competitive Programming](https://cpbook.net/).\n";
    readme.close();
}
