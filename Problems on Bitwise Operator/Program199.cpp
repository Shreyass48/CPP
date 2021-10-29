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
    UINT iMask = 0x00ffff00;
    UINT iTemp = iNo & iMask; // it off 2,3 bytes

    UINT Byte1 = iNo << 24;   //it move byte 1 to 4
    UINT Byte4 = iNo >> 24;   // it move byte 4 to 1

    UINT iResult = iTemp | Byte1 | Byte4;

    return iResult;


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









