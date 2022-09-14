/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

#include <queue>
class compare{//we are making pq of node type so we need our own comparator
    public:
    bool operator()(Node<int> *a,Node<int> *b){
        return a->data > b->data;
    }  
};
Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    // Write your code here.
    priority_queue<Node<int>*,vector<Node<int>*>,compare> minHeap;
    
    int k=listArray.size();
    if(k==0) 
        return NULL;
    
    //! Step1 : sab LL ke elements ko minheap mein daal do
    for(int i=0;i<k;i++){
        //push start ele of all ll
        if(listArray[i]!=NULL){
            minHeap.push(listArray[i]);
        }
    }
    //! Step2 : new LL banao and conditions ke acc bhar do LL ko
    Node<int> *head=NULL,*tail=NULL;
    
    while(minHeap.size()>0){
        Node<int> *temp=minHeap.top();
        minHeap.pop();
        
        if(head==NULL){
            //if ll is empty
            head=temp;
            tail=temp;
            if(tail->next!=NULL){
                minHeap.push(tail->next);//push next ele of given ll in pq 
            }
        }
            else{
                //if ele are already there 
                tail->next=temp;
                tail=temp;
                if(tail->next!=NULL){
                    minHeap.push(tail->next);//push next ele of given ll in pq 
                }
            }
        }
    return head;
}
