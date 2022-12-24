// ZIGZAG TRAVERSE
/*
class Solution
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        vector<int> result;

        if (root == NULL)
            return result;

        queue<Node *> q;
        q.push(root);
        bool l2r = true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> temp(size);

            for (int i = 0; i < size; i++)
            {

                Node *frontnode = q.front();
                q.pop();

                int index = l2r ? i : size - i - 1;
                temp[index] = frontnode->data;

                if (frontnode->left)
                    q.push(frontnode->left);

                if (frontnode->right)
                    q.push(frontnode->right);
            }
            // direction change
            l2r = !l2r;

            for (auto i : temp)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
*/

    // Boundary traversal
    /*
    class Solution
    {
    public:
        void traverseLeft(Node *root, vector<int> &ans)
        {
            if (root == NULL || (root->left == NULL && root->right == NULL))
                return;

            ans.push_back(root->data);
            if (root->left)
                traverseLeft(root->left, ans);
            else
                traverseLeft(root->right, ans);
        }

        void traverseLeaf(Node *root, vector<int> &ans)
        {

            if (root == NULL)
                return;

            if (root->left == NULL && root->right == NULL)
            {
                ans.push_back(root->data);
                return;
            }

            traverseLeaf(root->left, ans);
            traverseLeaf(root->right, ans);
        }

        void traverseRight(Node *root, vector<int> &ans)
        {

            if (root == NULL || (root->left == NULL && root->right == NULL))
                return;

            if (root->right)
                traverseRight(root->right, ans);
            else
                traverseRight(root->left, ans);

            ans.push_back(root->data);
        }

        vector<int> boundary(Node *root)
        {
            vector<int> ans;

            if (root == NULL)
                return ans;

            ans.push_back(root->data);

            traverseLeft(root->left, ans);
            traverseLeaf(root->left, ans);
            traverseLeaf(root->right, ans);
            traverseRight(root->right, ans);
        }
    };
    */