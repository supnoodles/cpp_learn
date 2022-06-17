/*
1. it allwos fast insertion at both beginning and end of container.
 (vector has push_back, but not push_front)
2. unlike vector, elements of vector are not stored in contiguous memory.
in deque, many fixed size arrays linked to each other
in vector, one long array.
3. storage of deque is automatically expanded and contracted.
   - expnasion of deque is cheaper than expansion of vector
4. A deque holding just one element has to allocate its full internal array
   (8 times object size for 64bit libstdc++  )
   (16 times object size, or 4096 bytes, whichever is larger on 64bit libc++)
*/

// TIME COMPLEXITY
// Random Access - O(1) (constant)
// Insertion or removal of elements at end or start - O(1)
// insertion or removal of elements - O(n)

#include <iostream>
#include <deque>

using namespace std;

void print(const deque<int>& dq) {for(int num: dq) cout << num << " "; cout << endl;}

int main() {
    
    deque<int> dq = {2, 3, 4};
    dq.push_front(1);
    dq.push_back(5);
    print(dq);

    deque<int> dq2 = {2, 3, 4};
    dq2.pop_front();
    dq2.pop_back();
    print(dq2);
}