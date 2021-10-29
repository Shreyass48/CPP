////////////////////////////////////////////////////////////////
//
// Program to accept number and accepet range of
// bits from user and turn ON it.
// Date   : 27/10/21
//
/////////////////////////////////////////////////////////////////

#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT OnRange(UINT iNo, int iStrt,int iEnd)
{
    UINT iMask = 0, iMask1 = 0xffffffff, iMask2 = 0xffffffff;
    UINT iResult = 0;

    iMask1 = (iMask1 << (iStrt - 1));
    iMask2 = (iMask2 >> (32 - iEnd));

    iMask = iMask1 & iMask2;

    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iS = 0, iE = 0;
   
    cout<<"Enter number:\n";
    cin>>iValue;

    cout<<"Enter Start Bit:\n";
    cin>>iS;
    cout<<"Enter End Bit:\n";
    cin>>iE;

    
    iRet = OnRange(iValue,iS,iE);

    cout<<"Updated number is:"<<iRet<<"\n";

    return 0;
}









