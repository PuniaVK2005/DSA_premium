#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
/*  Creating the linked list using array  */
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

/* Insert the node at given position in given linked list */
void insert(int pos, int x)
{
    Node *t, *p;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

/* Sortin the linked list*/
int sort(Node *p)
{
    int x = -32768;
    while (p != NULL)
    {
        if (x > p->data)
        {
            return false;
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return true;
}

/* Deleting the element at given position*/
int deleteNum(Node *p, int pos)
{

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

        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
            return x;
        }
    }
    return x;
}

/* display the linked list*/
void display(struct Node *p)
{

    while (p != NULL)
    {

        cout << p->data << endl;

        p = p->next;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 6, 8};
    create(a, 6);
    insert(0, 10);
    insert(1, 5);
    insert(2, 6);
    insert(3, 7);

    insert(6, 12);
    sort(first);
     cout<<"deleted element is "<<  deleteNum( first,4)<<endl;
    display(first);
}
