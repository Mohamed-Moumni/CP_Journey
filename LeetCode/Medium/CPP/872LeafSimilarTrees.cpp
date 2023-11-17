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
    vector<int> tree_sequence(TreeNode *root)
    {
        stack<TreeNode *> nodes;
        vector<int> sequence;

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
        return sequence;
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        vector<int> seq1, seq2;
        int size;

        seq1 = tree_sequence(root1);
        seq2 = tree_sequence(root2);
        size = seq1.size();
        if (size != seq2.size())
            return false;
        for (int i = 0; i < size; i++)
            if (seq1[i] != seq2[i])
                return false;
        return true;
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