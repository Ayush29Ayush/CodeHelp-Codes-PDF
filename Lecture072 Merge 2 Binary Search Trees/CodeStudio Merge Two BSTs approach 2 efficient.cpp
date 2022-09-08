/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/
void inorderstore(TreeNode<int> *root, vector<int> &in) {
    if(root==NULL)
        return; 
    
    inorderstore(root->left, in);
    in.push_back(root->data);
    inorderstore(root->right, in);
}

vector<int> mergeArrays(vector<int> &a, vector<int> &b) {
    vector<int> ans(a.size() + b.size());
    
    int i = 0, j = 0;
    int k = 0;
    while(i<a.size() && j<b.size())
    {
        if(a[i] < b[j])
        {
            ans[k] = a[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = b[j];
            k++;
            j++;
        }
    }
    
    while(i<a.size())
    {
        ans[k] = a[i];
        k++;
        i++;
    }
    while(j<b.size())
    {
        ans[k] = b[j];
        k++;
        j++;
    }
    
    return ans;
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

TreeNode<int>* mergeLinkedList(TreeNode<int> *head1, TreeNode<int> *head2) {
    
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

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
    /*
    // step1: store inorder in vector
    vector<int> bst1, bst2;
    inorderstore(root1, bst1);
    inorderstore(root2, bst2);
    
    // step2: merge these two vectors
    vector<int> mergedArray = mergeArrays(bst1, bst2);
    
    // step3: create a bst using the merged sorted inorder vector 
    // NOTE: inorder bst are sorted so the sorted vector will create a inorder bst
    int s = 0;
    int e = mergedArray.size()-1;
    
    return inorderToBST(s,e,mergedArray);
    */
    
    //! step1 : convert BST into sorted DLL in-place(no extra memory used)
    TreeNode<int> *head1 = NULL;
    convertIntoSortedDLL(root1, head1);
    head1 -> left = NULL;
    
    TreeNode<int> *head2 = NULL;
    convertIntoSortedDLL(root2, head2);
    head2 -> left = NULL;
    
    //! step2 : merge sorted LL
    TreeNode<int> *head = mergeLinkedList(head1, head2);
    
    //! step3 : convert sorted LL to BST
    return sortedLLToBST(head, countNodes(head));
    
}