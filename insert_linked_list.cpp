#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

} *first = NULL;

// void create(int a[], int n)
// {

//     int i;
//     Node *t, *last;
//     first = new Node;
//     first->data = a[0];
//     first->next = NULL;
//     last = first;
//     for (int i = 1; i < n; i++)
//     {
//         t = new Node;
//         t->data = a[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

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

void display(Node *q)
{
    while (q != 0)
    {
        cout << q->data << endl;
        q = q->next;
    }
}

int main()
{
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // create(a, 8);

    insert(0, 10);
    insert(1, 5);
    insert(2, 6);
    insert(3, 7);
    insert(0, 20);
    insert(4, 9);
    insert(3, 2);

    display(first);
}