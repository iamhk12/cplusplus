#include <iostream>
#include <queue>
#define br cout << endl;
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = this->right = NULL;
    }
};

node *buildtree(node *root)
{

    int data;
    cout << "Enter the data: ";
    cin >> data;
    cout << endl;

    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildtree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separator

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete ho chuka hy
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{

    if (root == NULL)
        return;

    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

void buildfromlevelorder(node *root)
{
    queue<node *> q;
    cout << "Enter data for root: ";
    int data;
    cin >> data;
    br;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    // root = buildtree(root);
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout << "Printing level order traversal output: " << endl;
    // levelOrderTraversal(root);
    // cout<<endl;

    // cout << "Inorder: ";
    // inorder(root);
    // cout << endl;

    // cout << "Preorder: ";
    // preorder(root);
    // cout << endl;

    // cout << "Postorder: ";
    // postorder(root);
    // cout << endl;

    buildfromlevelorder(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1
    levelOrderTraversal(root);

    return 0;
}