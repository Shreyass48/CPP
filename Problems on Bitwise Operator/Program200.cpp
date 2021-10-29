////////////////////////////////////////////////////////////////
//
// Program to accept number and and swap first and last byte
// Date   : 27/10/21
//
/////////////////////////////////////////////////////////////////

#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT SwapByte(UINT iNo)
{

    return (iNo & 0x00ffff00) | (iNo << 24) | (iNo >> 24);

}

int main()
{
    UINT iValue = 0, iRet = 0;

   
    cout<<"Enter number:\n";
    cin>>iValue;

    
    iRet = SwapByte(iValue);
    cout<<"Swap data:"<<iRet<<"\n";



    return 0;
}









