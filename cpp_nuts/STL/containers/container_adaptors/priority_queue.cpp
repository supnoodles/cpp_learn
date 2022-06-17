// std::priority_queue

/*
1. priority que is a container adaptor that provides constant time lookup
   of the largest or smallest element.
2. By default, std::vector is the cotnainer used inside.
3. Time Complexity of insertion and extraction is logarithmic.
4. priority_que is implemented using std::make_heap, std::push_heap, std::push_heap
*/

#include <queue>
#include <vector>
#include <iostream>

using namespace std;

template<typename T> void print_queue(T& q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << '\n';
}

int main() {

    // ex1 - max heap
    priority_queue<int> q;
    for (int elm: {1,8,5,6,3,4,0,9,7,2}) {
        q.push(elm);
    }
    print_queue(q);

    // ex2 - min heap
    priority_queue<int, vector<int>, greater<int>> q2;
    for (int elm: {1,8,5,6,3,4,0,9,7,2}) {
        q2.push(elm);
    }
    print_queue(q2);


}