TreeNode<int> mergeLinkedList(TreeNode<int> *head1, TreeNode<int> *head2) {
    
    TreeNode<int> *head = NULL;
    TreeNode<int> *tail = NULL;
    
    while(head1 != NULL && head2 != NULL) {
        if(head1->data < head2->data)
        {
            // agar head node is NULL means LL abhi banna start hoga so head and tail will point at the smallest node
             if(head==NULL)
             {
                 head = head1;
                 tail = head1;
                 head1 = head1->right;
                 
             }
            // agar head ho pehla element assign nahi ho raha, that means ki ab sab new nodes tail pe lagna start honge
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if(head==NULL)
             {
                 head = head2;
                 tail = head2;
                 head2 = head2->right;
             }
            else
            {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }
    // agar LL1 abhi tak finish nahi hua then
    while(head1 != NULL) {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    // agar LL2 abhi tak finish nahi hua then
    while(head2 != NULL) {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    
    return head;
    
}