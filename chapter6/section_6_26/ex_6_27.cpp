#include <vector>
#include <iostream>

using namespace std;


int sum_ints(initializer_list<int> lst){
    int sum = 0;
    for (auto it = lst.begin(); it != lst.end(); ++it){
        sum += *it;
    }
    return sum;
}

int main(){
    initializer_list<int> lst = {1, 2, 3, 4, 5};

    int sum = sum_ints(lst);

    cout << sum << endl;

    // ex 6.28
    // const string &elem

    // ex 6.29
    // yes, avoids copying the value.
}