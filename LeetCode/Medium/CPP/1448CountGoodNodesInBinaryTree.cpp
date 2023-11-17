#include <iostream>

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
        void dfs(TreeNode *root, int maximum, int &count)
        {
            if (!root)
                return;
            if (root->val >= maximum)
            {
                count++;
                maximum = root->val;
            }
            dfs(root->left, maximum, count);
            dfs(root->right, maximum, count);
        }

        int goodNodes(TreeNode *root)
        {
            int maxX = root->val;
            int count = 1;
            dfs(root->left, maxX, count);
            dfs(root->right, maxX, count);
            return count;
        }
};

int main(void)
{
    Solution s;
    TreeNode root(3);
    root.left = new TreeNode(3);
    root.left->left = new TreeNode(4);
    root.left->right = new TreeNode(2);

    cout << s.goodNodes(&root) << endl;
}