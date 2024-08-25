#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
 void display(Node *p){
    while(p!=0){
        cout<<p->data<<endl;
        p = p->next;
    }
 }

int deleteNum( Node *p ,int pos){

    Node *q = NULL;
    int x = -1;
    
    if (pos == 1)
    {
         q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }

    else
    {
      
        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        
        if(p){
            q->next = p->next;
            x  = p ->data;
            delete p;
   return x;
     
    }
  
}
   return x;
}




int main()
{
    int a[] = {1, 2, 3, 4, 6, 8};
    int n;
   
    create(a, 6);
  
    cout<<"deleted element is "<<  deleteNum( first,4)<<endl;
     display(first);
    return 0;
}
