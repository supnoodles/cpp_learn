#include <iostream>

using namespace std;

// template <class T>
// class Test{
//     T first, second;
// public:
//     Test(T a, T b):first{a}, second{b} {}
//     T bigger();
// };

// template <class T>
// T Test<T>::bigger() {
//     return (first > second ? first : second);
// }

// int main() {
//     Test<int> t1(100, 200);

//     cout << t1.bigger();
// }



// EQUIVALENT TO ABOVE
template <class T>
class Test{
    T first, second;
public:
    Test(T a, T b):first{a}, second{b} {}
    T bigger() {return (first > second ? first : second);}
};

int main() {
    Test<int> t1(100, 200);

    cout << t1.bigger();
}