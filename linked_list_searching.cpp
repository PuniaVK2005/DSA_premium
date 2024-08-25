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
struct Node *display(struct Node *p, int key)
{

    while (p != NULL)
    {
        if (key == p->data)

            return p;

        p = p->next;
    }

    return NULL;
}

int main()
{
    struct Node *temp;
    int a[] = {1, 2, 3, 4, 6, 8};

    create(a, 6);
    temp = display(first, 8);
    if (temp)
    {
        cout << "key found"
             << " " << temp->data << endl;
    }
    else
        cout << "key not found" << endl;
}
