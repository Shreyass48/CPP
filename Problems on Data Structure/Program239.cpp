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

int main()
{
    char Arr[20];
    int iRet = 0;

    cout << "Enter String:";
    scanf("%[^'\n']s", Arr);

    iRet = StrlrnI(Arr);
    cout << "Length of string:" << iRet << "\n";

    return 0;
}