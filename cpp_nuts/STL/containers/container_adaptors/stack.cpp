// std::stack

/*
1. Internally, it uses a std::deque container.
2. It's LIFO structure (Last in First out)
3. std::stack allows to push and pop only from back
     [1, 2, 3, 4, 5]
front               back
bottom              top

PROVIDED FUNCTIONS ---------------------------- TIME COMPLEXITY
empty() - returns whether stack is empty.          O(1)
size() - returns size of stack.                    O(1)
top() - returns a ref to top most element of stack O(1)
push(g) - adds element 'g' at top of stack         O(1)
pop() - deletes top most element of stack          O(1)
*/

#include <iostream>
#include <stack>

using namespace std;

void print(stack<int> stk) {
    while(!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }
}

int main() {
    stack<int> stk;

    stk.push(2);
    stk.push(3);
    stk.push(4);

    print(stk);
}