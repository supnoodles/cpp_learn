#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    int arr[vec.size()-1];

    for (int i = 0; i < vec.size(); ++i){
        arr[i] = vec[i];
    }
}