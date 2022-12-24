// Height of a tree
/*
int height(struct Node *node)
{

    if (node == NULL)
        return 0;

    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left, right) + 1;

    return ans;
}

*/

// Diameter of a tree (APPROACH #1)
/*
class Solution
{
private:
    int height(Node *root)
    {

        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        int ans = max(left, right) + 1;

        return ans;
    }

public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node *root)
    {
        if (root == NULL)
            return 0;

        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + 1 + height(root->right);

        int ans = max(op3, max(op1, op2));

        return ans;
    }
};

*/

// Diameter of tree (APPROACH #2)
/*
class Solution {

  public:
  pair <int,int> diameterfast(Node* root){

        if(root==NULL){
        pair <int,int> p = make_pair(0,0);
        return p;
        }

        pair<int,int> left = diameterfast(root->left);
        pair<int,int> right = diameterfast(root->right);
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second  + right.second + 1;

        pair<int,int> ans;

        ans.first = max(op3,max(op1,op2));
        ans.second = max(left.second,right.second)+1;



        return ans;


  }

    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {

       return diameterfast(root).first;


    }
};
*/

// Check Balanced tree (APPROACH #1)
/*
class Solution
{
private:
    int height(Node *root)
    {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        int ans = max(left, right) + 1;

        return ans;
    }

public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        // base case
        if (root == NULL)
            return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if (left && right && diff)
            return true;
        else
            return false;
    }
};
*/

// Check Balanced tree (APPROACH #2)

/*
class Solution
{
public:
    pair<bool, int> balfast(Node *root)
    {

        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = balfast(root->left);
        pair<bool, int> right = balfast(root->right);

        bool leftans = left.first;
        bool rightans = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (leftans && rightans && diff)
            ans.first = true;
        else
            ans.first = false;

        return ans;
    }

public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return balfast(root).first;
    }
};

*/


