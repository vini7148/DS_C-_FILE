#include<bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack
{
    int top;
public:
    int a[MAX];

    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
    void show();
};

void Stack::show()
{
    if(isEmpty())
        cout<<"\nNothing to show";
    else
        for(int i=0;i<=top;i++)
            cout<<a[i]<<"\n";
}

bool Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x <<" pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    class Stack s;
    int n;
    do
    {
        cin>>n;
        switch(n)
        {
            case 1: {int a;cin>>a;s.push(a);
                    break;}
            case 2: {s.pop();
                    break;}
            case 3: {s.show();
                    break;}
            default:{break;}
        }
    }while(n!=4);
    return 0;
}
