#include <iostream>

using namespace std;

typedef struct tree
{
    int value;
    struct tree *root;
    struct tree *left;
    struct tree *right;
} bst;

//delete an element in the binary search tree
// find the element
// insert it's left the parent node of the node to be deleted
// insert the right element into the binary search tree


// create binary search tree node
bst *create_bst_node(int value)
{
    bst *node = new bst;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// insert an element in the binary search tree
void insert_node(bst **_tree, bst *node, bst *parent)
{
    if (*_tree == nullptr)
    {
        node->root = parent;
        *_tree = node;
        return;
    }
    if (node->value > (*_tree)->value)
        insert_node(&(*_tree)->right, node, *_tree);
    else
        insert_node(&(*_tree)->left, node, *_tree);
}

// search for an element in the binary search
bst *search(bst *root, int value_to_search)
{
    if (root == nullptr)
        return nullptr;
    if (root->value == value_to_search)
        return root;
    if (root->value > value_to_search)
        return search(root->left, value_to_search);
    else
        return search(root->right, value_to_search);
}

// find the minimum element in the binary search tree
bst *find_minimum(bst *root)
{
    if (root == nullptr)
        return root;
    bst *minimum = root;
    while (root->left != nullptr)
    {
        minimum = root->left;
        root = root->left;
    }
    return minimum;
}

// Traverse the tree in traversal order
void inorder_traversal_tree(bst *root)
{
    if (root)
    {
        inorder_traversal_tree(root->left);
        cout << root->value << endl;
        inorder_traversal_tree(root->right);
    }
}

// find The Maximum
bst *find_maximum(bst *root)
{
    if (root == nullptr)
        return root;
    bst *maximum = root;
    while (root->right != nullptr)
    {
        maximum = root->right;
        root = root->right;
    }
    return maximum;
}

void delete_node(bst **_tree, int value)
{
    bst *node_to_be_deleted = search(*_tree, value);
    if (!node_to_be_deleted->left and !node_to_be_deleted->right)
        delete node_to_be_deleted;
    else if (node_to_be_deleted->left and !node_to_be_deleted->right)
    {
        node_to_be_deleted->root = node_to_be_deleted->left;
        delete node_to_be_deleted;
    }
    else if (!node_to_be_deleted->left and node_to_be_deleted->right){
        node_to_be_deleted->root = node_to_be_deleted->right;
        delete node_to_be_deleted;
    }
    else
    {
        
    }
        cout << "Node To Be Deleted " << node_to_be_deleted->value << endl;
    node_to_be_deleted->root->left = node_to_be_deleted->left;

    insert_node(&(*_tree), node_to_be_deleted->right, *_tree);
}

int main(void)
{
    bst *my_tree;
    bst *node = create_bst_node(1);

    my_tree = create_bst_node(10);
    my_tree->root = my_tree;
    my_tree->left = create_bst_node(7);
    my_tree->left->root = my_tree->root;
    my_tree->right = create_bst_node(15);
    my_tree->right->root = my_tree->root;
    my_tree->left->left = create_bst_node(4);
    my_tree->left->left->root = my_tree->left;
    my_tree->left->right = create_bst_node(9);
    my_tree->left->right->root = my_tree->left;
    my_tree->right->left = create_bst_node(12);
    my_tree->right->left->root = my_tree->right;
    my_tree->right->right = create_bst_node(17);
    my_tree->right->right->root = my_tree->right;

    cout << "Before Insertion" << endl;
    inorder_traversal_tree(my_tree);
    insert_node(&my_tree, node, my_tree);
    cout << "After Insertion" << endl;
    inorder_traversal_tree(my_tree);
    cout << "Delete The node that has 10 as a value" << endl;
    delete_node(&my_tree, 10);
    cout << "After Delete of the node" << endl;
    inorder_traversal_tree(my_tree);
    return (0);
}