class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* curr = root;
        
        while(curr!=NULL)
        {
            // now check if left part exists
            if(curr->left)
            {
                // here we are applying inorder predecesor
                Node* prev = curr->left;
                while(prev->right!=NULL)
                {
                    // keep going to right until you find NULL
                    prev = prev->right;
                }
                
                prev->right = curr->right;
                curr->right = curr->left;
            }
            
            curr = curr->right;
            // Morris Traversal => THE END
        }
        
        //! To handle the additional condition given i.e to make left part NULL
        curr = root;
        while(curr!=NULL)
        {
            curr->left = NULL;
            curr = curr->right;
        }
    }
};