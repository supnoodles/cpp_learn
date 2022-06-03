#include <iostream>
#include <vector>

using namespace std;

int main(){
    // array equality
    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[] = {1, 2, 3, 4, 5};

    // bool equality = true;

    // for (int i = 0; i < 5; i++){
    //     if (arr1[i] != arr2[i]) {
    //         equality = false;
    //     }
    // }

    // if (equality) {
    //     cout << "The two arrays are equal";
    // } else {
    //     cout << "The two arrays are not equal";
    // }

    // vec equality
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};
    
    if (vec1 == vec2) {
        cout << "the two vecs are equal";
    } else {
        cout << "the two vecs are not equal";
    }
}