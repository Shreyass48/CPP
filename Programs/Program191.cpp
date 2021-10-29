///////////////////////////////////////////////////////////////////////
//
// Program to take number and count number of on bits(not using / and %).
// Date   : 27/10/21
//
///////////////////////////////////////////////////////////////////////

#include<iostream>
//typedef unsigned int UINT;

using namespace std;

int CountBit(int iNo)
{
    int i = 0, iCnt = 0;
    int iMask = 0x00000001;


    for(i = 1; i < 32; i++, iMask = iMask << 1)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number:\n";
    cin>>iValue;

    iRet = CountBit(iValue);

    cout<<"Number of bits which are ON:"<<iRet<<"\n";

    return 0;
}






