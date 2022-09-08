void convertIntoSortedDLL(TreeNode<int> *root, TreeNode<int>* &head) {
    // base case
    if(root==NULL)
        return NULL;
    
    convertIntoSortedDLL(root->right, head);
    
    root->right = head;
    
    if(head!=NULL)
        head->left = root;
    
    head = root;
    
    convertIntoSortedDLL(root->left, head);
}