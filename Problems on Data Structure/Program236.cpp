/////////////////////////////////////////////
//
// Accept n no from user and return addition
// Recursion
// 18/11/21
//
////////////////////////////////////////////

#include<iostream>
using namespace std;

int SumI(int Arr[],int size)
{
    int iSum = 0, i = 0;
    for(i = 0;i < size; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;

}


int main()
{
    int iLen = 0, i = 0;

    int *p = NULL;

    cout<<"Enter number of element:";
    cin>>iLen;

    p = new int[iLen]; // like malloc

    cout<<"Enter elements:";
    for(i = 0; i < iLen; i++)
    {
        cin>>p[i];
    }

    int iRet = SumI(p,iLen);
    cout<<"Addition is :"<<iRet<<"\n";

    delete []p;

    return 0;
}