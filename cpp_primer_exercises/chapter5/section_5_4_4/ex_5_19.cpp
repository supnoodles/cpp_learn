#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1, s2;

    do {
        cout << "Enter two strings: ";
        cin >> s1 >> s2;
        if (s1.size() > s2.size()) {
            cout << "string 1 larger" << endl;
        } else if (s1.size() < s2.size()) {
            cout << "string 2 larger" << endl;
        } else {
            cout << "strings are of equal size" << endl;
        }
    } while (cin);
}