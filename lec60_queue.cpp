// Queue STL
/*
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(11);

    cout << q.front() << endl;

    q.push(15);
    q.push(13);

    cout << q.back() << endl;

    cout << "Size = " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Size = " << q.size() << endl;

    if (q.empty())
        cout << "Queue is empty " << endl;
    else
        cout << "Queue is not empty " << endl;

    return 0;
}
*/

// Queue implementation
/*
#include<iostream>
using namespace std;

class Queue {

    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
*/

// Circular Queue

/*
class CircularQueue{
    public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(int n){
        arr =  new int[n];
        size = n;
        front = -1;
        rear = -1;

    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front == 0 && rear == size -1)||(rear==(front-1)%(size-1)))
            return false;
        else if(front ==-1 && rear ==-1)
        {
            front =0;
            rear = 0;
            arr[rear]= value;
            return true;
        }
        else if(front!=0&&rear==size-1)
        {
            rear = 0;
            arr[rear]=value;
            return true;
        }
        else {
            rear++;
            arr[rear]=value;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if((front==-1 && rear==-1))
            return -1;
        else if(front == rear){
            int i=arr[rear];
            front =-1;
            rear = -1;
            return i;
        }
        else if(front ==size-1)
        {
            int i= arr[front];
            front = 0;
            return i;
        }
        else
        {
            int i= arr[front];
            front++;
            return i;
        }
    }
};

*/

// Doubly ended queue
// STL
/*
#include <iostream>
#include <stdio.h>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    
    cout << d.front() << endl;
    cout << d.back() << endl;

    if(d.empty()) cout<<"queue is empty"<<endl;
    else cout<<"queue is not empty"<<endl;
}
*/
//Implementation
/*
class Deque
{
public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int size;
    
    Deque(int n)
    {
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull())
            return false;
        else if(front ==-1&&rear ==-1){
            front = 0;
            rear = 0;
        }
        else if(front==0 && rear !=size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front]= x;
        return true;
        
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull())
            return false;
        else if(front ==-1&&rear ==-1){
            front = 0;
            rear = 0;
        }
        else if(front!=0&&rear==size-1)
        {
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
        
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) { 
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if((front==-1 && rear==-1))
            return -1;
        
        int ans = arr[rear];
        arr[rear]=-1;
        if(front == rear){
            front =-1;
            rear = -1;
        }
        else if(rear==0)
        {
            rear = size-1;
        }
        else
        {
            rear--;
        }
     return ans;   
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if((front==-1 && rear==-1))
            return -1;
        else
            return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if((front==-1 && rear==-1))
            return -1;
        else
            return arr[rear];        
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if((front==-1 && rear==-1))
        return true;
        return false;
     }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == size -1)||(front!=0 && rear==(front-1)%(size-1)))
        return true;
        return false;
    }
};
*/

