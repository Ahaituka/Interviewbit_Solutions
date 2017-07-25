/**
 Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node’s key.
The right subtree of a node contains only nodes with keys greater than the node’s key.
Both the left and right subtrees must also be binary search trees.
Example :

Input :
   1
  /  \
 2    3

Output : 0 or False


Input :
  2
 / \
1   3

Output : 1 or True
Return 0 / 1 ( 0 for false, 1 for true ) for this problem
 */

//#include<iostream>
//#include <vector>
//
//
//using  namespace std;
//
//
//struct TreeNode
//{
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
//int maxValue(int)


// C++ program to check if a given tree is BST.
#include <iostream>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *right, *left;

    TreeNode(int x) : val(x), right(NULL), left(NULL) {};
};


void Inorder(TreeNode *tree) {
    if (tree == NULL)
        return;
    else
        Inorder(tree->left);
    cout << tree->val;
    Inorder(tree->right);
}

void PostOrder(TreeNode *tree) {
    if (tree == NULL)
        return;
    else
        PostOrder(tree->left);
    PostOrder(tree->right);
    cout << tree->val;

}

void PreOrder(TreeNode *tree) {
    if (tree == NULL)
        return;
    else
        cout << tree->val;
    PreOrder(tree->left);
    PreOrder(tree->right);
}

bool Isbst(TreeNode *tree) {
    static TreeNode *prev = NULL;
    if (tree) {
        if (!Isbst(tree->left))
            return false;
        if (prev != NULL and tree->val <= prev->val)
            return false;
        prev = tree;
        Isbst(tree->right);
    }
    return true;
}

/* Driver program to test above functions*/
int main() {
    struct TreeNode *tree = new TreeNode(3);
    tree->left = new TreeNode(2);
    tree->right = new TreeNode(1);
    tree->left->left = new TreeNode(5);
    tree->left->right = new TreeNode(4);

//    if (isBST(root))
//        cout << "Is BST";
//    else
//        cout << "Not a BST";
//
//    return 0;
//    Inorder(tree);
//    cout<<endl;
//    PostOrder(tree);
//    cout<<endl;
//    PreOrder(tree);
//    cout<<endl;
    cout << Isbst(tree);


}


