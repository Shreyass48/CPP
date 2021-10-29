///////////////////////////////////////////////////////////////////////
//
// Print hello world
// Date   : 25/10/21
//
/////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Marvellous
{
    public:
    int Addition(int x, int y)
    {
        int iAns = 0;
        iAns = x + y;
        return iAns;
    }
};
int main()
{
    int iNo1 = 0, iNo2 = 0, iSum = 0;

    cout << "Enter first number :";
    cin >> iNo1;
    cout << "Enter second number :";
    cin >> iNo2;

    Marvellous mobj;                    //obj creation
    iSum = mobj.Addition(iNo1, iNo2);

    cout<<"Addition is : "<<iSum<<"\n";
    
    return 0;
}





