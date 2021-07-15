#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000;

class Stack
{
    int top;

public:
    int a[MAX];
    Stack()
    {
        top = -1;
    }

    // push a element into stack
    bool push(int x)
    {
        if (top == (MAX - 1))
        {
            cout << "Stack Overflow" << endl;
            return false;
        }
        a[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }

    // pop a element from the stack
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow";
            return -1; // assuming -1 does not exist in stack elements.
        }
        return a[top--];
    }

    // peek a element from the stack
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
            return -1; // assuming -1 does not exist in stack elements.
        }
        return a[top];
    }

    // check is empty or not
    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.peek() << endl;

    // print all elements in stack
    while (!s.isEmpty())
    {
        cout << s.pop() << " ";
    }

    return 0;
}