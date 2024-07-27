// stack.h
#ifndef STACK_H
#define STACK_H

struct Node;

struct Stack
{
    int top;
    int size;
    Node **S;
};

void createStack(Stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->S = (Node **)malloc(st->size * sizeof(Node *));
}

void push(Stack *st, Node *x)
{
    if (st->top == st->size - 1)
        cout << "Stack Overflow\n";
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

Node *pop(Stack *st)
{
    Node *x = NULL;
    if (st->top == -1)
        cout << "Stack Underflow\n";
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

Node *stackTop(Stack st)
{
    if (st.top == -1)
        return NULL;
    return st.S[st.top];
}

#endif // STACK_H
