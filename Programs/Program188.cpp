////////////////////////////////////////////////////////////////
//
// Program to take number from user and position of bit 
// and toggle that bit.
// Date   : 27/10/21
//
////////////////////////////////////////////////////////////////

#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT Togglebit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0; 

    if((iPos < 1) || (iPos > 32))       //Filter
    {
        return 0;
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iValue2;

    cout << "Enter number:\n";
    cin >> iValue;

    cout << "Enter Position:\n";
    cin >> iValue2;

    iRet = Togglebit(iValue,iValue2);

    cout<<"Updated number is:"<<iRet<<"\n";

    return 0;
}






