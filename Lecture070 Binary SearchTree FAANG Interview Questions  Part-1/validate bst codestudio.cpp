
bool isBST(BinaryTreeNode<int> *root, int min, int max) {
        // base case
        if(root==NULL)
            return true;
        
        if(root->data >= min && root->data <= max)
        {
            bool left = isBST(root->left, INT_MIN, root->data);
            bool right = isBST(root->right, root->data, INT_MAX);
            return (left && right);
        }
        else
            return false;
        
    }

bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return isBST(root, INT_MIN, INT_MAX);
}