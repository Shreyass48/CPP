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
    char x = '\0', y = '\0';

    cout<<"Enter first element :\n";
    cin>>x; 
    cout<<"Enter second element :\n";
    cin>>y; 

    SwapX(&x,&y);

    cout<<"Value of x become : "<<x<<"\n";
    cout<<"Value of y become : "<<y<<"\n";

    return 0;
}