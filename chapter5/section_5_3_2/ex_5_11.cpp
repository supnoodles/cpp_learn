#include <iostream>

using std::cin;

int main(){

    unsigned int aCnt = 0, eCnt = 0,iCnt = 0,oCnt = 0,uCnt = 0;
    unsigned int spaceCnt = 0, tabCnt = 0, lineCount = 0;
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
        } else if (ch == ' ') {
            ++spaceCnt;
        } else if (ch == '\t') {
            ++tabCnt;
        } else if (ch == '\n') {
            ++lineCount;
        }
    }
}