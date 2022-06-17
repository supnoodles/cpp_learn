// std::queue

/*
1. queue is a FIFO structure
2. queue provides only specific set of functions
3. queue allows to push at back and pop at front
     [a, b, c, d, e]
front               back
4. other funcs: front, back, push, pop, empty, size.
*/

#include <iostream>
#include <queue>

using namespace std;

void print(queue<int> que) {
    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }
}

int main() {
    queue<int> que;

    que.push(2);
    que.push(3);
    que.push(4);

    print(que);

    return 0;
}