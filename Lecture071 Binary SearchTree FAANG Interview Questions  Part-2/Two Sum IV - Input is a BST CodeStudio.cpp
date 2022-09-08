// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/
void solve(BinaryTreeNode<int>* root, vector<int> &inorder)
{
    // base case
    if(root==NULL)
        return;
    
    // LNR
    solve(root->left, inorder);
    inorder.push_back(root->data);
    solve(root->right, inorder);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inorderVal;
    solve(root, inorderVal);
    
    int i = 0;
    int j = inorderVal.size()-1;
        
        while(i<j)
        {
            if(inorderVal[i]+inorderVal[j] == target)
                return true;
            else if(inorderVal[i]+inorderVal[j] > target)
                j--;
            else if(inorderVal[i]+inorderVal[j] < target)
                i++;
        }
        return false;
}