#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main(){

    // string s1, s2;
    // cin >> s1 >> s2;
    // if (s1 == s2) {
    //     cout << " Strings are Equal ";
    // } else if (s1 > s2) {
    //     cout << " first string is larger";
    // } else {
    //     cout << " second string is larger";
    // }

    string s1, s2;
    cin >> s1 >> s2;
    int x = s1.size();
    int y = s2.size();
    if (x == y) {
        cout << "strings of equal length";
    } else if (s1 > s2) {
        cout << "string 1 is larger";
    } else {
        cout << "string 2 is larger";
    }
}