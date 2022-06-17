#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// add all values in a vec list
template <typename T>
T addAll(std::vector<T> list) {
    T count = 0;
    for (int i = 0; i < list.size(); ++i){
        count += list[i];
    }
    return count;
}

// template specialisation
// if 
template <>
string addAll(vector<string> list) {
    int count = 0;
    for (int i = 0; i < list.size(); ++i){
        for (int j = 0; j < list[i].size(); ++j){
            count += list[i][j];
        }
    }
    ostringstream Ostr;
    Ostr << count;
    string strCount = Ostr.str();
    return strCount;
}

int main() {
    vector<int> vecInt = {4, 3, 2, 5, 6, 1};
    vector<double> vecDouble = {4.0, 3.0, 2.0, 5.0, 6.0, 1.0};
    vector<string> VecString = {"ab"};

    cout << addAll(vecInt) << endl;
    cout << addAll(vecDouble) << endl;
    cout << addAll(VecString) << endl;

    return 0;
}