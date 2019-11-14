#include <iostream>
#include <fstream>
#include <stdio.h>
#include <dirent.h>

struct dirent *entry = nullptr;

using namespace std;

int notDot(string & str) {
  
  char dot = '.';

  for (int i = 0; i < str.size(); i++) {
    if (str[i] == dot) {
      return 0;
    }
  }

  return 1;
}

int main () {

    DIR *dp = nullptr;

    string header = "# competitive-programming\n\nThis is a collection of solutions to problems from [Kattis](https://open.kattis.com) that I do in my free time.\n\n";
    string listHeader = "## Problems Completed";

    ofstream readme;
    
    readme.open ("README.md");
    
    readme << header;
    readme << listHeader;

    dp = opendir("./");
    
    if (dp != nullptr) {

        readme << "\n";

        while ((entry = readdir(dp))) {
            
            string name = (entry->d_name);
            
            if (notDot(name)) {

              string link = "- [" + name + "](https://www.github.com/bradendubois/competitive-programming/tree/master/" + name + ")\n";

              readme << link << "\n";
            }
        }

        readme << "\n\nThis list was generated by [my readme generator](https://www.github.com/bradendubois/blob/master/competitive-programming/generate_readme.cpp) and is not ordered in any particular fashion.";
    }

    closedir(dp);

    readme.close();
    return 0;
}
