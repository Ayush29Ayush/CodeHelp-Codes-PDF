/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
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
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void solve(TreeNode<int>* root, vector<int> &inorder)
{
    // base case
    if(root==NULL)
        return;
    solve(root->left, inorder);
    inorder.push_back(root->data);
    solve(root->right, inorder);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorderVal;
    // store values in sorted order using inorder traversal
    solve(root, inorderVal);
    int n = inorderVal.size();
    // Step1
    TreeNode<int>* newRoot = new TreeNode<int> (inorderVal[0]);
    
    TreeNode<int>* curr = newRoot;
    // Step2
    for(int i=1; i<n; i++)
    {
        TreeNode<int>* temp = new TreeNode<int> (inorderVal[i]);
        
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    
    // Step3
    curr->left = NULL;
    curr->right = NULL;
        
    // Step4
    return newRoot;
}
