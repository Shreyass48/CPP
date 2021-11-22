/////////////////////////////
//
// Print sum of digit in given number
// Recursion
// 18/11/21
//
///////////////////////////

#include<iostream>
using namespace std;

// Iteration
int SumI(int iNo)
{
    int iSum = 0;
    while (iNo != 0)
    {
       iSum = iSum + (iNo % 10);
       iNo = iNo / 10;
    }
    return iSum;
    
}

// Recursion
int SumR(int iNo)
{
    static int iSum = 0;
    if (iNo != 0)
    {
       iSum = iSum + (iNo % 10);
       iNo = iNo / 10;
       SumR(iNo);
    }
    return iSum;
}

int main()
{
    int x = 0;

    cout<<"Enter number:";
    cin>>x;

    int iRet = SumR(x);
    cout<<"Sum of digits :"<<iRet<<"\n";

    return 0;
}