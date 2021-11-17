// Singly Circular
// 15/11/21

#include<iostream>
using namespace std;

typedef struct node
{
    int Data;
    struct node * Next;
}NODE,*PNODE;

class SinglyCL
{
    private:
    PNODE first;
    PNODE last;
    int size;

    public:
    SinglyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }

    void Display()
    {
        PNODE temp = first;
        if((first == NULL) && (last == NULL))
        {
            return;
        }

        do
        {
            cout<<"|"<<temp->Data<<"| -> ";
            temp = temp->Next;
        }while(temp != last->Next);
        cout<<"NULL\n";
    }
     
    int Count()
    {
        return size;
    }
     
    void InsertFirst(int no)
    {
        PNODE newn = new NODE;

        newn->Data = no;
        newn->Next = NULL;

        if((first == NULL) && (last == NULL))  //LL empty if(size == 0)
        {
          first = newn;
          last = newn;  
        }
        else
        {
            newn->Next = first;
            first = newn;
        }
        last->Next = first;
        size++;

    }

    void InsertLast(int no)
    {
        PNODE newn = new NODE;

        newn->Data = no;
        newn->Next = NULL;

        if((first == NULL) && (last == NULL))  //LL empty if(size == 0)
        {
          first = newn;
          last = newn;  
        }
        else
        {
            last->Next = newn;
            last = newn;
        }
        last->Next = first;
        size++;
    }

    void InsertAtPos(int no, int iPos)
    {

    }

    void DeleteFirst()
    {
       if((first == NULL) && (last == NULL))    //if(size == 0)
       {
           return;
       } 
       else if(first == last)     //if(size == 1)
       {
           delete first;
           first = NULL;
           last = NULL;    
       }
       else
       {
           first = first->Next;
           delete last->Next;
           last->Next = first;
       }
       size--;
    }

    void DeleteLast()
    {
        PNODE temp = first;
       if((first == NULL) && (last == NULL))
       {
           return;
       } 
       else if(first == last)
       {
           delete first;
           first = NULL;
           last = NULL;    
       }
       else
       {
           while (temp->Next != last)
           {
              temp = temp->Next;
           }
            delete last;
            last = temp;
            last->Next = first; 
       }
        size--;

    }

    void DeleteAtPos(int iPos)
    {

    }

};

int main()
{
    int iRet = 0; 
    SinglyCL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);

    obj.Display();
    iRet = obj.Count();
    cout<<"Elements in LL are :"<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"Elements in LL are :"<<iRet<<"\n";


    return 0;
}