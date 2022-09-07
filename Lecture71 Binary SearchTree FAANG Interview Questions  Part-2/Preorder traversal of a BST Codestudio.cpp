/*
    Following is the class structure of BinaryTreeNode class for referance:

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

        ~BinaryTreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };
*/

BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int &i) {
    // if array ke size se bahar nikal gaya then return NULL
    if(i>=preorder.size())
        return NULL;
    
    //     if range se bahar nikal gaya
    if(preorder[i] < mini || preorder[i] > maxi)
        return NULL;
    
    // if range mein hai then node banado
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
    
    // then left aur right ke liye call lagado
    root->left = solve(preorder, mini, root->data, i);
    root->right = solve(preorder, root->data, maxi, i);
    
    return root;
    
}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int index = 0;
    return solve(preorder, mini, maxi, index);
}


