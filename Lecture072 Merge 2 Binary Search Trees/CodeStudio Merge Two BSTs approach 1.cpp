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

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
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
    
    
    
}