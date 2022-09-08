int countNodes(TreeNodes<int> *head) {
    int cnt = 0;
    TreeNode<int> *temp = head;
    
    while(temp!=NULL)
    {
        cnt++;
        temp = temp->right;
    }
    
    return cnt;
}

TreeNode<int>* sortedLLToBST(TreeNode<int>* &head, int n)
{
    // base case
    if(n<=0 || head == NULL)
    {
        return NULL;
    }
    
    // left subtree banado
    TreeNode<int> *left = sortedLLToBST(head, n/2);
    
    TreeNode<int> *root = head;
    root->left = left;
    
    head = head->next;
    
    // right subtree banado
    root->right = sortedLLToBST(head, n-n/2-1);
    
    return root;
}