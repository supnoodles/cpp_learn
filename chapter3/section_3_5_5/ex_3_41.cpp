#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec;

    for (int i = 0; i < 5; ++i){
        vec.push_back(arr[i]);
    }
}