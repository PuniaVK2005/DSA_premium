#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second, *third = NULL;

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

void createsecond(int b[], int m)
{
    int j;
    struct Node *x, *last;
    second = new Node;
    second->data = b[0];
    second->next = NULL;
    last = second;

    for (int j = 1; j < m; j++)
    {
        x = new Node;
        x->data = b[j];
        x->next = NULL;
        last->next = x;
        last = x;
    }
}
void mergelist(Node *first, Node *second)
{
    Node *last = NULL;
    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = 0;
    }

    else
    {
        third = last = second;
        second = second->next;
        last->next = 0;
    }
    while (first != 0 && second != 0)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = 0;
        }

        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = 0;
        }
    }
    if (first != 0)
    {

        last->next = first;
    }
    else
    {
        last->next = second;
    }
}

void display(Node *r)
{

    while (r != 0)
    {
        cout << "merge list is:" << r->data << endl;
        r = r->next;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 8,56};
    int b[] = {10, 23, 54, 90};
    create(a, 6);
    createsecond(b, 4);
    mergelist(first, second);
    display(third);
}
