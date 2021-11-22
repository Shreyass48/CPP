/////////////////////////////
//
// Print marvellous 4 time
// Recursion
// 18/11/21
//
///////////////////////////

#include<iostream>
using namespace std;

//Iteration
void DisplayI()
{
    int iCnt = 1;
    while (iCnt <= 4)
    {
        cout<<"ABC\n";
        iCnt++;
    }
    

}

//Recursion
void DisplayR()
{
    static int iCnt = 1;

    if (iCnt <= 4)
    {
        cout<<"ABC\n";
        iCnt++;
        DisplayR();
    }   

}

int main()
{
    int i = 0 //for concept only
    DisplayR();

    
    return 0;
}

