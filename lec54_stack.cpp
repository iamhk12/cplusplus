// Stack
/*
#include <iostream>
#include <stack>

using namespace std;

int main()
{

    // creation
    stack<int> s;

    // push
    s.push(1);
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    s.push(12);

    cout<<"Printing top element: "<<s.top()<<endl;

    cout<<"Empty ?== "<<boolalpha<<s.empty()<<endl;

    cout<<"Size ==  "<<s.size()<<endl;

    s.pop();

    cout<<"Size ==  "<<s.size()<<endl;


    return 0;
}
*/

#include <iostream>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {

        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow condition" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow condition" << endl;
        }
        else
        {
            top--;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top];

        else
            cout << "Stack is Empty";
        return -1;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{

    Stack st(5);

    st.push(11);
    st.push(12);
    st.push(13);
    st.push(11);
    st.push(12);
    st.push(13);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if (st.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
}