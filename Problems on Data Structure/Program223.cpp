// Generic Programming
// swap 2 elements
// 17/11/21

#include<iostream>
using namespace std;

// Specific Function
void Swap(char *p,char *q)
{
    char temp ;
    temp = *p;
    *p = *q;
    *q = temp;

}

// Generic Function
template<class T>
void SwapX(T *p,T *q)
{
    T temp ;
    temp = *p;
    *p = *q;
    *q = temp;

}

int main()
{
    char x = 'A', y = 'B';

    SwapX(&x,&y);
    cout<<"Value of x become : "<<x<<"\n";
    cout<<"Value of y become : "<<y<<"\n";

    int i = 11, j = 21;

    SwapX(&i,&j);
    cout<<"Value of x become : "<<i<<"\n";
    cout<<"Value of y become : "<<j<<"\n";

    return 0;
}