#include <iostream>
#include <sstream>

using namespace std;

long octal(long in) {
    long temp = in;
    while (temp != 0) {
        if (temp % 10 >= 8) return 0;
        temp /= 10;
    } return in;
}


int main() {

    long P, K, in, hexTemp, octTemp;
    cin >> P;

    while (P--) {
        cin >> K >> in;

        stringstream octConv;
        stringstream hexConv;

        octConv << octal(in);
        octConv >> std::oct >> octTemp;
        
        hexConv << in;        
        hexConv >> std::hex >> hexTemp;
        
        cout << K << " " << octTemp << " " << in << " " << hexTemp << endl;
    }
}