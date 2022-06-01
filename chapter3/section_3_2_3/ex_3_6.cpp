#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(){
    string str = "1234";
    int i = 0 ;
    for (char c: str){
        str[i] = 'X';
        ++i;
    }
    cout << str;
}