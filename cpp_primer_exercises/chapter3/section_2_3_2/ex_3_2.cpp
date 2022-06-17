#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main(){

    // string s;
    // // read a line at a time
    // while (getline(cin, s)){
    //     cout << s << std::endl;
    // }

    string s;
    // read a word at a time
    while (cin >> s) {
        cout << s << std::endl;
    }
}