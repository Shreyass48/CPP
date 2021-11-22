/////////////////////////////
//
// Print marvellous n time
// Recursion
// 18/11/21
//
///////////////////////////

#include<iostream>
using namespace std;

//Iteration
void DisplayI(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        cout<<"ABC\n";
        iCnt++;
    }
    

}

//Recursion
void DisplayR(int iNo)
{
    static int iCnt = 1;
    if (iCnt <= iNo)
    {
        cout<<"ABC\n";
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iVal = 5;

    // DisplayI(iVal);
    DisplayR(iVal);

    
    return 0;
}

