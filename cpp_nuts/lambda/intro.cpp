/*
LAMBDA EXPRSSIONS

are convenient for short snippets of code that are not going to be reused.

[capture clause] (parameters) {
    lambda/fct body
}
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    // lambda expression
    auto add = [](auto x, auto y){ return x + y; };

    int a = 1, b = 2;
    string str1 = "cppnuts", str2 = "rupesh";

    cout << add(1, 2) << endl;
    cout << add(str1, str2) << endl;
    
}