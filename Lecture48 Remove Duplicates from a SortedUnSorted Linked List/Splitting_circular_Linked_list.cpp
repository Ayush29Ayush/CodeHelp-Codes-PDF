//! Split Circular LL -

void breakCircularLL(Node *&head, Node *head1, Node *head2)
{

    if (head == NULL)
    {
        return;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != head && fast->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    head1 = head;
    head2 = slow->next;

    slow->next = head1;

    Node *curr = head2;
    while (curr->next != head)
    {
        curr = curr->next;
    }

    curr->next = head2;
}

/*
split circular LL
void splitList(Node *head, Node **head1, Node **head2)
{
    
    Node *temp=head;
    int count=0;
    while(temp->next!=head){
        count++;
        temp=temp->next;
    }
    *head1=temp->next;
    if(count%2==0){
        int i=0;
        temp=*head1;
        while(i<count/2){
            i++;
            temp=temp->next;
        }
        *head2=temp->next;
        temp->next=*head1;
        temp=*head2;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=*head2;
        
    }
    else{
        int i=0;
        temp=*head1;
        while(i<(count/2)){
            i++;
            temp=temp->next;
        }
        *head2=temp->next;
        temp->next=*head1;
        temp=*head2;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=*head2;
        
    }
    
}
*/