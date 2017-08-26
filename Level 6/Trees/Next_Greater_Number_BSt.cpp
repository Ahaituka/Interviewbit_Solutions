/*
 Next Greater Number BST
Given a BST node, return the node which has value just greater than the given node.

Example:

Given the tree

               100
              /   \
            98    102
           /  \
         96    99
          \
           97
Given 97, you should return the node corresponding to 98 as thats the value just greater than 97 in the tree.
If there are no successor in the tree ( the value is the largest in the tree, return NULL).

Using recursion is not allowed.

Assume that the value is always present in the tree.
 */

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *Find(TreeNode *root, int data) {
    if (root == NULL)
        return root;
    if (root->val == data)
        return root;
    if (data > root->val)
        return Find(root->right, data);
    else
        return Find(root->left, data);
}

TreeNode *Solution::getSuccessor(TreeNode *root, int B) {

    if (root == NULL)
        return root;

    TreeNode *current = Find(root, B);

    if (current->right != NULL) {
        TreeNode *temp = current->right;
        while (temp->left != NULL) {
            temp = temp->left;

        }
        return temp;
    } else {
        TreeNode *ancs = root;
        TreeNode *succ = NULL;
        while (ancs != current) {
            if (current->val < ancs->val) {
                succ = ancs;
                ancs = ancs->left;


            } else {
                ancs = ancs->right;

            }

        }
        return succ;

    }


}
