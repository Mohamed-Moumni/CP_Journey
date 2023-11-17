#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void tree_sequence(TreeNode *root, vector<int> &sequence)
    {
        stack<TreeNode *> nodes;

        nodes.push(root);
        while (!nodes.empty())
        {
            TreeNode *head = nodes.top();
            nodes.pop();
            TreeNode *left = head->left;
            TreeNode *right = head->right;
            if (!left && !right)
                sequence.push_back(head->val);
            else
            {
                if (right)
                    nodes.push(right);
                if (left)
                    nodes.push(left);
            }
        }
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> sequence1;
        vector<int> sequence2;

        tree_sequence(root1, sequence1);
        tree_sequence(root2, sequence2);
        return sequence1 == sequence2;
    }
};

int main(void)
{
    Solution s;
    TreeNode root1(1);
    root1.left = new TreeNode(2);
    root1.right = new TreeNode(3);
    TreeNode root2(1);
    root2.left = new TreeNode(2);
    root2.right = new TreeNode(3);
    if (s.leafSimilar(&root1, &root2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return (0);
}

// recursive solution
// void tree_sequence(TreeNode *root, vector<int> &sequence)
// {
//     if (root == NULL)
//         return;
//     if (root->left == NULL && root->right == NULL)
//         sequence.push_back(root->val);
//     tree_sequence(root->left, sequence);
//     tree_sequence(root->right, sequence);
// }