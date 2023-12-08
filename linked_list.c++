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

void insertAthead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node *head)
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
    
     cout<< ptr->val;
     delete ptr->next;
    //  cout<<"\n freeeeee"<<ptr->next;
    ptr->next=NULL;
   
   

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
    deleteAtend(head);
    display(head);
    //  cout<<n->next <<"  "<<n->val;

    getch();
    return 0;
}