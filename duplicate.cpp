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
void checkduplicate(Node *p)
{
    Node *q;
    p = first;
    q = first->next;
    int x = 0;
    int count = 0;
    while (q != 0)
    {
        if (p->data != q->data)
        {
            p = q;
            count++;
            q = q->next;
        }

        else
        {
            p->next = q->next;

            x = q->data;
            delete q;
            q = p->next;
        }
    }
    if (count == 0)
    {
        cout << "there is no duplicate value in linked list" << endl;
    }
    else
    {
        cout << "there is some duplicate value is" << endl;
        cout << "duplicate values " << x << endl;
    }
}
void display(Node *r)
{
    while (r != 0)
    {
        cout << r->data << endl;
        r = r->next;
    }
}

int main()
{
    int a[] = {1, 2, 3, 3, 5, 6, 7, 7};

    create(a, 8);
    checkduplicate(first);
    display(first);
}