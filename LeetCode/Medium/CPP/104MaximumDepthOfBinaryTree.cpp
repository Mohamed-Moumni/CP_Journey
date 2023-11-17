#include<iostream>
#include<queue>

using namespace std;

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        queue<TreeNode *> nodes;
        if (!root)
            return 0;
        return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
    }
};

int main(void)
{

}