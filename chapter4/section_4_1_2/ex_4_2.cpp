#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vec = {1,2,3,4,5};

    // equivalent
    cout << *vec.begin() << endl;
    cout << *(vec.begin()) << endl;

    // equivalent
     cout << * vec.begin() + 1 << endl;
     cout << *(vec.begin() + 1) << endl;

}