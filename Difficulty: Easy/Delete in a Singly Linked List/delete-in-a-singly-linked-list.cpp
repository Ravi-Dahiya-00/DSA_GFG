/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        
        if(head==NULL) return NULL;
        
        Node* dummy=new Node(0);
        dummy->next=head;
        
        Node* temp=dummy;
        int count=0;
        
        while(temp->next!=NULL){
            count++;
            if(count==x){
                Node* node_to_delete=temp->next;
                temp->next=node_to_delete->next;
                delete node_to_delete;
                break;
            }
            temp=temp->next;
        }
        Node* newhead=dummy->next;
        delete dummy;
        return newhead;
    }
};