#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(){
    string s, s2;
    
    getline(cin, s);

    for (int i = 0; i < s.size(); ++i){
        if (!ispunct(s[i])){
            s2 += s[i];
        }
    }

    cout << s2;
}