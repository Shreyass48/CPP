///////////////////////////////////////////////////////////////////////
//
// Program to take number from user and 2 position of bit 
// and toggle those 2 bit.
// Date   : 27/10/21
//
///////////////////////////////////////////////////////////////////////

#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT Togglebit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001, iMask = 0;
    UINT iResult = 0, iResult1 = 0, iResult2 = 0; 

    if(((iPos1 < 1) || (iPos1 > 32)) && ((iPos2 < 1) || (iPos2 > 32)))       //Filter
    {
        return 0;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    iMask = iMask1 | iMask2;
    

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet;
    int iValue2 = 0, iValue3 = 0;

    cout<<"Enter number:\n";
    cin>>iValue;

    cout<<"Enter first position of Bit:\n";
    cin>>iValue2;

    cout<<"Enter second position of Bit:\n";
    cin>>iValue3;

    iRet = Togglebit(iValue,iValue2,iValue3);

    cout<<"Updated number is:"<<iRet<<"\n";

    return 0;
}









