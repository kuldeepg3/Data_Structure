#include<iostream>
#include<conio.h>
#define MAX 5
using namespace std;

int arr[MAX];
int TOS =-1;
void push();
void pop();
void display();
void update();
void search();

int main(){

    int choice;  
cout<<"================================================================";
cout<<"\n||\t\t\t STACK OPERATIONS \t\t\t||"<<endl;
cout<<"================================================================";
cout<<"\n||\t\t1. Perform Push Operation \t\t\t||"<<endl;
cout<<"================================================================";
cout<<"\n||\t\t2. Perform Pop Operation \t\t\t||"<<endl;
cout<<"================================================================";
cout<<"\n||\t\t3. Perform display Operation \t\t\t||"<<endl;
cout<<"================================================================";
cout<<"\n||\t\t4. Perform search Operation \t\t\t||"<<endl;
cout<<"================================================================";
cout<<"\n||\t\t5. Perform update Operation \t\t\t||"<<endl;
cout<<"================================================================";
cout<<"\n||\t\t6. Perform exit Operation \t\t\t||"<<endl;
cout<<"================================================================";
 while(1){
cout<<"\nChoose any operation from the above table :";
cin>>choice;
switch(choice)
{
    case 1: push();
    break;
    
    case 2: pop();
    break;
  
    case 3: display();
    break;

     case 4:search();
    break;
    
    case 5:update();
    break;
  
    case 6: exit(0);
    break;

    default:  cout <<"Invalid user input please choose from table!!";

}

}



getch();
    return 0;
}

void push(){
int val;
if(TOS==MAX-1){"The Stack is already full!";}
else{
    cout<<"Enter a value to be inserted : ";
    cin>>val;
    TOS++;
    arr[TOS]=val;
    cout<<"\n The "<<val<<" is successfully inserted on "<<TOS<<" positon";
    }
    getch();
}



void pop(){
    int pos,del_val;
    if(TOS==-1){
        cout<<"The stack is empty";
    }else{
         del_val=arr[TOS];
         arr[TOS]=0;
         TOS--;
        cout<<"you have deleted "<<del_val;  
    }
}

void display(){
    for(int i=MAX;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}

void update(){
    int pos,ud_val;
       cout<<"\nEnter the position where you want to update ";
       cin>>pos;
       if(TOS>=pos){
        cout<<"\n Enter the updated value";
        cin>>ud_val;
           arr[pos]=ud_val;
       }else{
        cout<<"\nAt this position their is no data value";
       }
}
void search(){
   int val;
   for(int i=MAX;i>=0;i--){
    if(val==arr[i]){
        cout<<"\nThe searched value is Founded -> "<<val;
    }else{
        cout<<"\nThe searched value is not Found";
    }
   }
}