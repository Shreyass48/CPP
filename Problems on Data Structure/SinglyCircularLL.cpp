#include<iostream>
using namespace std;

typedef struct node
{
    int Data;
    struct node *Next;
}NODE,*PNODE;

class SinglyCircularLL
{
    private:
    PNODE first;
    PNODE last;
    int size;

    public:
    SinglyCircularLL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }
    void Display()
    {
        PNODE temp = first;
        do
        {
            cout<<"|"<<temp->Data<<"| -> ";
            temp = temp->Next;
        } while(temp != last->Next);
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

        if((first == NULL) &&(last == NULL))
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

        if((first == NULL) &&(last == NULL))
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
    void InsertAtPos(int no, int pos)
    {
        int i = 0;
        PNODE temp = first;
        if((pos < 1) || (pos > size+1))
        {
            return;
        }

        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == size+1)
        {
            InsertLast(no);
        }
        else
        {
            PNODE newn = new NODE;
            newn->Data = no;
            newn->Next = NULL;

            for(i = 1; i < pos - 1; i++)
            {
                temp = temp->Next;
            }
            newn->Next = temp->Next;
            temp->Next = newn;
        }
        size++;
        

    }
    void DeleteFirst()
    {
        if((first == NULL) &&(last == NULL))
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
            first = first->Next;
            delete last->Next;
        }
        last->Next = first;
        size--;

    }

    void DeleteLast()
    {
        int i = 0;
        PNODE temp = first;
         if((first == NULL) &&(last == NULL))
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
            while(temp->Next != last)
            {
                temp = temp->Next;
            }
            delete temp->Next;
            temp->Next = first;
            
        }
        last->Next = first;
        size--;

    }
    
    void DeleteAtPos(int pos)
    {
        int i = 0;
        PNODE temp = first;
        PNODE target = NULL;
        if((pos < 1) || (pos > size))
        {
            return;
        }

        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == size)
        {
            DeleteLast();
        }
        else
        {
            for(i = 1; i < pos - 1; i++)
            {
                temp = temp->Next;
            }
            target = temp->Next;
            temp->Next = target->Next;
            delete target;
        }
        size--;
    }

};

int main()
{
    int iRet = 0;

    SinglyCircularLL obj;
    obj.InsertFirst(50);
    obj.InsertFirst(30);
    obj.InsertFirst(10);
    obj.InsertLast(100);
    obj.InsertLast(200);

    obj.Display();

    obj.InsertAtPos(55,4);
    obj.Display();
    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.Count();
    cout<<"Size of LL is:"<<iRet<<"\n";

    return 0;
}
