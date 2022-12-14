/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Base Case
    if(root==NULL)
        return false;
    if(root->data == x)
        return true;
    
    
    // if x bada hai then search in right
    if(x > root->data)
        return searchInBST(root->right, x);
    // if x chota hai then search in left
    if(x < root->data)
        return searchInBST(root->left, x);
    
}