// DETECT CYCLE/LOOP IN LL

#include <iostream>
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

bool detectloop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        else
        {
            visited[temp] = true;
        }
        temp = temp->next;
    }
    return false;
}

Node *floydDetectloop(Node *head)
{
    if (head == NULL)
        return head;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{

    if (head == NULL)
        return NULL;

    Node *intersection = floydDetectloop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *&head)
{
    if (head == NULL)
        return;

    Node *startofloop = getStartingNode(head);
    Node *temp = startofloop;
    while (temp->next != startofloop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}