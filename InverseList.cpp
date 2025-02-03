#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    
    Node(int val){
        this->data=val;
        next=NULL;
    }

};
void display(Node *head){
    Node * x=head;
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void reverse(Node *head){
    Node *x=head;
    while (x->next!=NULL){
        x=
    }
}

int main(){
    Node *head=NULL;
    Node *node1=new Node(1);
    head->next=node1;
    Node *node2=new Node(2);
    node1->next=node2;
    Node *node3=new Node(3);
    node2->next=node3;
    Node *node4=new Node(4);
    node3->next=node4;
    
    cout<<"Linked list before: ";
    display(head);






}