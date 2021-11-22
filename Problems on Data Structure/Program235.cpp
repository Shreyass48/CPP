/////////////////////////////
//
// Factorial number
// Recursion
// 18/11/21
//
///////////////////////////

#include<iostream>
using namespace std;

// Iteration
int FactorialI(int iNo)
{
    int iFact = 1;
    while (iNo != 0 )
    {
        iFact = iFact * iNo;
        iNo-- ;
    }
    return iFact;
    
}

// Recursion
int FactorialR(int iNo)
{
    static int iFact = 1;
    if (iNo != 0 )
    {
        iFact = iFact * iNo;
        iNo-- ;
        FactorialR(iNo);
    }
    return iFact;

}

int main()
{
    int x = 0;

    cout<<"Enter number:";
    cin>>x;

    int iRet = FactorialR(x);
    cout<<"Factorial is :"<<iRet<<"\n";

    return 0;
}