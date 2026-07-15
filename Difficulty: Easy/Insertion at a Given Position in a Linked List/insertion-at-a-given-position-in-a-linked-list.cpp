/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        Node* newnode=new Node(val);
        
        if(pos==1){
            newnode->next=head;
            return newnode;
        }
        
        Node* dummy=new Node(0);
        dummy->next=head;
        
        int count=1;
        Node* temp=dummy;
        while(count<pos && temp!=NULL){
            count++;
            temp=temp->next;
        }
        
        if(temp==NULL) return head;
        
        newnode->next=temp->next;
        temp->next=newnode;
        
        Node* newhead=dummy->next;
        delete dummy;
        return newhead;
    }
};