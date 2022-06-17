#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // TASK 1
    // vector<int> vec;
    // int x;

    // // read in the integers
    // while (cin >> x){
    //     vec.push_back(x);
    // }

    // // print sum of every adjacent element
    // for (int i = 1; i < vec.size(); ++i){
    //     cout << vec[i] + vec[i - 1] << " ";
    // }

    // TASK 2
    vector<int> vec;
    int x;

    // read in the integers
    while (cin >> x)
    {
        vec.push_back(x);
    }

    // print sum of elem0 & elem last, elem1 & elemn-1 ....
    int i = 0;
    int j = vec.size() - 1;
    while (j >= 0){
        cout << vec[i] + vec[j] << " ";
        ++i;
        --j;
    }
}