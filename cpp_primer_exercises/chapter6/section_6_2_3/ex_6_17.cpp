#include <iostream>
#include <string>

using namespace std;

bool is_uppercase(const string& s){
    for (int i = 0; i < s.size();++i){
        if (islower(s[i]) == 0){
            return true;
        }
    }
    return false;
}

void string_lowercase(string& s){
    for (int i = 0; i < s.size();++i){
        if (islower(s[i]) == 0) {
            s[i] = tolower(s[i]);
        }
    }
}

int main(){

    string s1 = "lmaooooo";
    string s2 = "lmAOOO";

    string_lowercase(s2);

    cout << s2;
}