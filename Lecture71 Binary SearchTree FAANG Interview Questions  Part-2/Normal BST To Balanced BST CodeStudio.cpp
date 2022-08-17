/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void solve(TreeNode<int>* root, vector<int> &inorder)
{
    // base case
    if(root==NULL)
        return;
    solve(root->left, inorder);
    inorder.push_back(root->data);
    solve(root->right, inorder);
}

TreeNode<int>* inorderToBST(int s, int e, vector<int> inorderVal)
{
    // base case
    if(s>e)
    {
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int> (inorderVal[mid]);
    root->left = inorderToBST(s, mid-1, inorderVal);
    root->right = inorderToBST(mid+1, e, inorderVal);
    
    return root;
}


TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> inorderVal;
    // store values in sorted order using inorder traversal
    solve(root, inorderVal);
    
    return inorderToBST(0, inorderVal.size()-1, inorderVal);
}
