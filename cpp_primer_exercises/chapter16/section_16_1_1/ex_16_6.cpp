#include <iostream>

using namespace std;


template<typename ArrType>
void print(ArrType* first, ArrType* last){
    while(first != last) {
        cout << *first << endl;
        ++first;
    }
    cout << "------" << endl;
}

template<typename T, size_t N>
T* begin_iterator(T (&arr)[N]){
    return &arr[0];
}

template<typename T, size_t N>
T* end_iterator(T (&arr)[N]){
    return &arr[N];
}

int main(){
    char arr1[3] = {'a', 'b', 'c'};
    int arr2[4] = {1, 2, 3, 5};

    auto beg_iter1 = begin_iterator<char, 3>(arr1);
    auto end_iter1 = end_iterator<char, 3>(arr1);
    print(beg_iter1, end_iter1);

    auto beg_iter2 = begin_iterator<int, 4>(arr2);
    auto end_iter2 = end_iterator<int, 4>(arr2);
    print(beg_iter2, end_iter2);
}