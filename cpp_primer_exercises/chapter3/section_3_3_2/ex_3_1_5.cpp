#include <vector>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main(){
    vector<string> vec;
    string str;

    while (cin >> str){
        vec.push_back(str);
    }

    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << std::endl;
    }
}