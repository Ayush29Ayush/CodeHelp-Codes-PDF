#include<queue>
class node{
    public:
    int data;
    int i;
    int j;
    
    node(int data, int row, int col){
        this->data = data;
        i = row;
        j = col;
    }
};

class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
            priority_queue<node*, vector<node*>, compare> q;
        
        for(int i=0; i<k; i++){
            node* temp = new node(kArrays[i][0], i, 0);
            q.push(temp);
        }
        
        vector<int> ans;
        while(q.size() > 0){
            node* temp = q.top();
            q.pop();
            ans.push_back(temp->data);
            
            int i = temp->i;
            int j = temp->j;
            
            if(j + 1 < kArrays[i].size()){
                node* temp = new node(kArrays[i][j+1], i, j+1);
                q.push(temp);
            }
        }
        
        return ans;
}
