#include <iostream>

using namespace std;



template<typename ArrType, size_t N>
void print(const ArrType (&arr)[N]){
    auto first = begin(arr);
    auto last = end(arr);

    while(first != last) {
        cout << *first << endl;
        ++first;
    }
    cout << "------" << endl;
}

int main(){
    char arr1[3] = {'a', 'b', 'c'};
    int arr2[4] = {1, 2, 3, 5};

    print<char, 3>(arr1);
    print<int, 4>(arr2);

}