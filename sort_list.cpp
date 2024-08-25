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

int sort(Node *p){
    int x = -32768;
    while(p!=NULL){
        if(x>p->data){
          return false;
            
        }
        else {
            x = p->data;
            p = p->next;

        }

        
    }
    return true;

}


int main()
{
    int a[] = {1, 3, 6, 8, 9};
    int n;
   
    create(a, 5);
  cout<< sort(first)<<endl;;
    
    
    return 0;
}