/////////////////////////////////////////////
//
// strlen
// Recursion
// 18/11/21
//
////////////////////////////////////////////

#include <iostream>
#include <stdio.h>
using namespace std;

int StrlrnI(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int StrlrnR(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        iCnt++;
        str++;
        StrlrnR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter String:";
    scanf("%[^'\n']s", Arr);

    iRet = StrlrnR(Arr);
    cout << "Length of string:" << iRet << "\n";

    return 0;
}