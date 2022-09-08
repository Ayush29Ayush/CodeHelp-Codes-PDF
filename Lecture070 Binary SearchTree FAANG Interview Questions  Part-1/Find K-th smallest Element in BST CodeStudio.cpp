int solve(BinaryTreeNode<int>* root, int& i, int k)
{
    // base case
    if(root==NULL)
        return -1;
    
    // LNR -> Inorder
    //L
    int left = solve(root->left, i, k);
    
    if(left!=-1)
        return left;
    
    //N
    i++;
    if(i==k)
        return root->data;
    
    //R
    int right = solve(root->right, i, k);
    if(right!=-1)
        return right;
    
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i = 0;
    int ans = solve(root, i, k);
    return ans;
}