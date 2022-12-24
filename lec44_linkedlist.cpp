// LINKED LIST 

//Singly linked list
/*
#include<iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for data " << value << endl;
    }
};

void insertatHead(Node *&head, int input)
{
    // New node create
    Node *temp = new Node(input);
    temp->next = head;
    head = temp;
}

void insertatTail(Node *&tail, int input)
{
    Node *temp = new Node(input);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatpos(Node *&head, Node *&tail, int position, int d)
{
    // insertathead
    if (position == 1)
    {
        insertatHead(head, d);
        return;
    }

    // n-1 tak traverse
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertatTail(tail, d);
        return ;
    }
    // creating a node for d
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deleteatpos(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;

            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int getlength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}


int main()
{
    Node *node1 = new Node(10);
    //  cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;

    Node *head = node1;
    Node *tail = node1;
    // print(head);

    insertatTail(tail, 12);
    // print(head);

    insertatTail(tail, 15);
    // print(head);

    insertatTail(tail, 22);
    // print(head);

    // insertatpos(head, tail, 1, 22);
    // print(head);

    // deleteatpos(head, 4);
    print(head);

    return 0;
}
*/

// Doubly linked list
/*
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int a)
    {
        this->data = a;
        this->prev = NULL;
        this->next = NULL;
    }
};

void Insertathead(Node *&head, int input)
{
    if (head == NULL)
    {
        Node *temp = new Node(input);
        head = temp;
    }
    else
    {
        Node *temp = new Node(input);
        temp->next = head;
        head->prev = head;
        head = temp;
    }
}

void Insertattail(Node *&tail, int input)
{
    if (tail == NULL)
    {
        Node *temp = new Node(input);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(input);
        tail->next = temp;
        temp->prev = tail;
        temp = tail;
    }
}

void Insertatpos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        Insertathead(head, data);
        return;
    }

    // n-1 tak traverse
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // reached position
    if (temp->next == NULL)
    {
        Insertattail(tail, data);
    }
    // creating a node for d
    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert->next;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void Deleteatpos(int pos, Node *&head)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        int cnt = 1;
        while (cnt < pos )
        {
            curr = curr->next;
            cnt++;
        }
        if (curr->next != NULL)
        {
            curr->next->prev = curr->prev;
            curr->prev->next = curr->next;
            delete curr;
        }
        else
        {
            curr->prev->next = NULL;
            delete curr;
        }
    }
}

int getlength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);

    Insertathead(head, 11);
    print(head);

    Insertathead(head, 12);
    print(head);

    Insertathead(head, 13);
    print(head);

    Insertattail(tail, 25);
    print(head);

    Insertatpos(head, tail, 2, 69);
    print(head);

    Insertatpos(head, tail, 5, 101);
    print(head);

    Deleteatpos(5,head);
    print(head);

    Deleteatpos(2,head);
    print(head);

    Deleteatpos(1,head);
    print(head);

    return 0;
}
*/


//Circular linked list 
// #include<iostream>
// using namespace std;

// class Node{
//     int data;
//     Node *next;

// };

// int main(){

// }