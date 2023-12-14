
#include<iostream>
#include<conio.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;


Node(int data){
    val=data;
    next=NULL;
    prev=NULL;
}
};
void insertAthead(Node* &head,int val){
    Node* new_node=new Node(val);
    if(head==NULL){
    head=new_node;
    new_node->next=head;
    }
    new_node->next=head;































































































































































    
}
int main(){

Node* head =NULL;

// Node* second_node =new Node(22);
// Node* third_node =new Node(33);
// Node* fourth_node =new Node(44);
// Node* fifth_node =new Node(55);

insertAthead(head,11);

// cout<<head->val;




    getch();
    return 0;
}