#include <iostream>
#include <string>

using namespace std;

int main(){

    string prev_s, curr_s, max_s;
    unsigned int repeat = 0, max_repeat = 0;

    while (cin >> curr_s){
        if (prev_s == curr_s) {
            ++repeat;
        } else {
            if (max_repeat < repeat){
                // max number of repeats
                max_repeat = repeat;
                // the word that was max repeated
                max_s = prev_s;
            }
            repeat = 1;
            prev_s = curr_s;
        }
    }

    cout << "max number of repeated words is: " << max_s << endl;
    cout << "it occured " << max_repeat << " times";
}

//how now now now brown cow cow :
// the word 'now' occurred 3 times