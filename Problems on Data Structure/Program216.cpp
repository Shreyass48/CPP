// Queue
// 16/11/21
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Queue     // Singly Linear Linked List
{
private:
    PNODE first;
    int size;
    
public:
    Queue()
    {
        first = NULL;
        size = 0;
    }
    
    void Enqueue(int no)   // InsertLast()
    {
        PNODE newn = new NODE;
        PNODE temp  = first;

        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
          while (temp->next != NULL)
          {
            temp = temp->next;
          }
          temp->next = newn;
             
        }
        size++;
    }
    
    int Dequeue()   // DeleteFirst()
    {
        PNODE temp  = first;
        int val = first->data; 

        if(first->next == NULL)
        {
            delete first;
            first = NULL;
        }
        else
        {
          first = temp->next;
          delete temp;
             
        }
        size--;
        return val;
        
    }
    
    void Display()
    {
        PNODE temp = first;
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"| -> ";
            temp = temp->next;
        }cout<<"NULL\n";
    }
    
    int Count()
    {
        return size;
    }
};

int main()
{
    Queue obj;
    
    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);
    
    int iret = obj.Dequeue();       
    cout<<"Delete element is : "<<iret<<"\n";                    
    
    obj.Display();          
    iret = obj.Count();     
    
    cout<<"Size of queue is : "<<iret<<"\n";    
    
    return 0;
}
