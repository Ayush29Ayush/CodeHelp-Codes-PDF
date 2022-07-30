/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getLength(Node* head)
{
    int len = 0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    
    return len;
}
// https://www.youtube.com/watch?v=vqS1nVQdCJM&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=52
Node *findMiddle(Node *head) {
    // Write your code here
    int len = getLength(head);
    int ans = (len/2);
    
    Node* temp = head;
    int cnt = 0;
    while(cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    
    return temp;
}