#include <iostream>

using std::cin;

int main(){

    unsigned int aCnt = 0, eCnt = 0,iCnt = 0,oCnt = 0,uCnt = 0;
    char ch;
    while (cin >> ch){
        if (ch == 'a' || ch == 'A') {
            ++aCnt;
        } else if (ch == 'e' || ch == 'E') {
            ++eCnt;
        } else if (ch == 'i' || ch == 'I') {
            ++iCnt;
        } else if (ch == 'o' || ch == 'O') {
            ++oCnt;
        } else if (ch == 'u' || ch == 'U') {
            ++uCnt;
        }
    }
}