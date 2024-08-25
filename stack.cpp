#include <iostream>

using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st)
{
    cout << "enter the size" << endl;
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void display(struct Stack *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        cout << st->s[i] << endl;
    }
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overflow" << endl;
    }

    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "stack underflow" << endl;
    }

    else
    {
        st->top--;
        x = st->s[st->top];
        return x;
    }
    return x;
}
int main()
{

    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    pop(&st);
    display(&st);

    return 0;
}