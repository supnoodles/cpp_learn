#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vec = {"un", "dos", "tres"};
    vector<string>::iterator iter = vec.begin();

    // returns value of where iterator at. Then increments iter.
    // cout << *iter++ << endl;

    // error. cannot increment a vector<string> type.
    // cout << (*iter)++ << endl;

    // error . *iter should be in brackets.
    // cout << *iter.empty() << endl;

    // returns true if position of iter is an empty str.
    // cout << iter->empty() << endl;

    // error. should be *++iter
    // cout << ++*iter << endl;

    // checks whether curr pos of iter is empty. then increments.
    // cout << iter++->empty() << endl;
}