#include <iostream>
#include <conio.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }

   ~Node(){
        
    }
};

void display(Node* head)
{
    Node *ptr = head;
    cout<<"||";
    while (ptr != NULL)
    {
        cout <<ptr->val;
        cout << "-->";
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        cout << "NULL ||"<<endl;
    }
}

void insertAthead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertAtend(Node *&head, int val)
{
    // cout<<head<<" "<<val;

    Node *new_node = new Node(val);
    //  cout<<new_node->val;
    Node *ptr = head;
    //  cout<<head <<"  "<<ptr;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    //   cout<<ptr-val;
    ptr->next = new_node;
}
void insertAtpos(Node *&head, int val, int pos)
{
    Node *new_node = new Node(val);
    Node* ptr = NULL;
    ptr=head;
    // cout<<"head address = "<<head<<endl;
    // cout<<"ptr address = "<<ptr<<endl;
    // cout<<"ptr next address ="<<ptr->next<<endl;
    // cout<<"ptr val ="<<ptr->val<<endl;
    // cout<<"ptr next val="<<ptr->next->val<<endl;
int i=1;
    while (i  < pos)
    { 
    
        ptr = ptr->next;
// cout<<"current ptr="<<ptr<<endl;
        i++;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}


void deleteAthead(Node* &head){
    Node* ptr=head;
    head=ptr->next;
    ptr->next=NULL;
    cout<<"\n"<<ptr->val<<" is disconnected from list"<<endl;
    free(ptr);

}
void deleteAtend(Node* &head){
    Node* ptr=head;
    while(ptr->next->next != NULL){
    ptr=ptr->next;
    }
    
    //  cout<< ptr->val;
     delete ptr->next;
    //  cout<<"\n freeeeee"<<ptr->next;
    ptr->next=NULL;
   
   

}
void deleteAtPos(Node* &head,int pos){
Node* ptr = head;
Node* temp=NULL;

for(int i=1;i<pos-1;i++){
    // cout<<i;
    ptr=ptr->next;

// cout<<ptr->val;
    
}
// cout<<"==============================="<<endl;
// cout<<"val= "<<ptr->val<<" now ptr="<<ptr<<endl;//33 b
ptr=ptr->next;
temp=ptr->next;
ptr->next=temp->next;
// cout<<"val= "<<ptr->val<<" now ptr ="<<ptr<<endl;//78 b c


ptr=ptr->next;
// cout<<"val= "<<ptr->val<<" now ptr ="<<ptr<<endl;//22 c
}

int main()
{

    Node *n = new Node(11);
    Node *head = n;
    insertAthead(head, 22);
    insertAthead(head, 33);
    insertAthead(head, 44);
    insertAthead(head, 55);
    insertAtend(head, 81);
    insertAtpos(head, 78, 3);
    display(head);
    deleteAthead(head);
    display(head);
    cout<<"================\n  listend element deleted";

    deleteAtend(head);
    display(head);
       cout<<"================\n";
    //  cout<<n->next <<"  "<<n->val;
    deleteAtPos(head,2);
    cout<<"================\nlocation 2 element deleted";
    display(head);
    getch();
    return 0;
}