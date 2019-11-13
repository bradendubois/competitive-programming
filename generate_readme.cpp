#include <iostream>
#include <fstream>
using namespace std;

int main () {

    string header = "# competitive-programming\n\nThis is a collection of solutions to problems from [Kattis](https://open.kattis.com) that I do in my free time.\n\n";
    string listHeader = "## Problems Completed";

    ofstream readme;
    
    readme.open ("README.md");
    
    readme << header;
    readme << listHeader;

    // TODO - Read current directly, list and link each completed project

    readme.close();
  
  return 0;
}
