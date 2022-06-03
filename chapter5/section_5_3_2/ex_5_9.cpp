#include <iostream>

using std::cin;

int main(){

    unsigned int aCnt = 0, eCnt = 0,iCnt = 0,oCnt = 0,uCnt = 0;
    char ch;
    while (cin >> ch){
        if (ch == 'a') {
            ++aCnt;
        } else if (ch == 'e') {
            ++eCnt;
        } else if (ch == 'i') {
            ++iCnt;
        } else if (ch == 'o') {
            ++oCnt;
        } else if (ch == 'u') {
            ++uCnt;
        }
    }
}