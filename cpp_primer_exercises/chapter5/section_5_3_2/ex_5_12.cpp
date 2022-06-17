#include <iostream>

using std::cin, std::cout;

int main()
{

    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int spaceCnt = 0, tabCnt = 0, lineCount = 0;
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    unsigned int f = 0;
    char ch;

    while (cin >> ch)
    {
        if (f == 0)
        {
            if (ch == 'a' || ch == 'A')
            {
                ++aCnt;
            }
            else if (ch == 'e' || ch == 'E')
            {
                ++eCnt;
            }
            else if (ch == 'i' || ch == 'I')
            {
                ++iCnt;
            }
            else if (ch == 'o' || ch == 'O')
            {
                ++oCnt;
            }
            else if (ch == 'u' || ch == 'U')
            {
                ++uCnt;
            }
            else if (ch == ' ')
            {
                ++spaceCnt;
            }
            else if (ch == '\t')
            {
                ++tabCnt;
            }
            else if (ch == '\n')
            {
                ++lineCount;
            }
            else if (ch == 'f')
            {
                f = 1;
            }
        }
        else if (f == 1)
        {
            if (ch == 'f')
            {
                ++ffCnt;
            }
            else if (ch == 'l')
            {
                ++flCnt;
            }
            else if (ch == 'i')
            {
                ++fiCnt;
            }
            f = 0;
        }
    }