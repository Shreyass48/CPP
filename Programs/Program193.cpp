///////////////////////////////////////////////////////////////////////
//
// Program to take number from user and toggle the first and last nibble
// Date   : 27/10/21
//
///////////////////////////////////////////////////////////////////////

#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iResult = 0; 

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet;
   
    cout<<"Enter number:\n";
    cin>>iValue;

    
    iRet = ToggleNibble(iValue);

    cout<<"Updated number is:"<<iRet<<"\n";

    return 0;
}









