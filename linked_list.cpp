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
void display(struct Node *p)
{
     int sum = 0;
    while (p != NULL)
    {
         
        // cout << p->data << endl;
        // p = p->next;
    //    count++;
    cout<<p->data<<endl;
    sum = sum+p->data;
    p = p->next;
  
    }
     cout<<"the sum is:"<<sum<<endl;;
}

int main()
{
    int a[] = {1, 2, 3, 4, 6, 8};
    create(a, 6);
    display(first);
  
}
