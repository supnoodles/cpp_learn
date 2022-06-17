#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    vector<string> vec;
    string str;

    // add all strings to vector until EOF
    while (cin >> str){
        vec.push_back(str);
    }

    // turn all strings to uppercase
    // print transformed elements, 8 words per line
    for (int i = 0; i < vec.size();++i){
        string &curr_str = vec[i];
        for (int j = 0; j < curr_str.size(); ++j){
            curr_str[j] = toupper(curr_str[j]);
        }

        cout << curr_str << " ";
        if ((i+1) % 8 == 0){
            cout << endl;
        }
    }

}