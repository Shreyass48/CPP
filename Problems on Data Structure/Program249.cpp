// Binary Search Tree
// 19/11/21

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = *Head;
        while(1)      // Unconditional Loop
        {
           if(temp->data == no)    // Data Already Present
           {
               cout<<"Duplicate NODE\n";
               delete newn;
               break;
           }
           else if(no < (temp->data))   // go to left(Small Data)
           {
               if(temp->lchild == NULL)
               {
                   temp->lchild = newn;
                   break;
               }
               temp = temp->lchild;               
           }
           else if(no > (temp->data))   // go to right(Large Data)
           {
               if(temp->rchild == NULL)
               {
                   temp->rchild = newn;
                   break;
               }
               temp = temp->rchild;
           }
        }
        

    }

}

bool Search(PNODE Head, int no)
{

    if(Head == NULL)    // Tree empty
    {
        return false;
    }
    else                // Tree contains atleast 1 node
    {
        while(Head != NULL)
        {
            if(Head->data == no)   // Found Node
            {
                break;
            }
            else if(no > (Head->data))   
            {
                Head = Head->rchild;    
            }
            else if(no < (Head->data)) 
            {
                Head = Head->lchild;   
            }
            
        }

        if(Head == NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
}

int Count(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int CountLeaf(PNODE Head)
{
    static int icnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head->rchild == NULL))
        {
            icnt++;
        }
        CountLeaf(Head->lchild);
        CountLeaf(Head->rchild);
    }
    return icnt;
}

int CountParent(PNODE Head)
{
    static int icnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild != NULL) || (Head->rchild != NULL))
        {
            icnt++;
        }
        CountParent(Head->lchild);
        CountParent(Head->rchild);
    }
    return icnt;
}

int main()
{
    int no = 0, iret = 0;
    bool bret = false;
    PNODE first = NULL; // Root Node

    Insert(&first,51);
    Insert(&first,11);
    Insert(&first,101);

    cout<<"Enter number to search:";
    cin>>no;

    bret = Search(first,no);
    if(bret == true)
    {
        cout<<"Element found!\n";   
    }
    else
    {
        cout<<"Element not found!\n";   
    }

    iret = Count(first);
    cout<<"Number of element in tree:"<<iret<<"\n";

    iret = CountLeaf(first);
    cout<<"Number of Leaf nodes in tree:"<<iret<<"\n";

    iret = CountParent(first);
    cout<<"Number of Parent nodes in tree:"<<iret<<"\n";

    return 0;
}
