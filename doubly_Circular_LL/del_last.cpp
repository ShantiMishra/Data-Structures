#include <iostream>
using namespace std;

struct DCLL{
      int data;
      DCLL *next,*prev;
};
  DCLL *temp,*ttemp,*p,*first;

  // To create first node of list 
  void first_node(int x){
    first=new DCLL;
    first->data=x;
    first->next=first;
    first->prev=first;
  }

  // Function to display the linked list
  void display(){
    temp=first;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=first);
    cout<<endl;
  }

 // To add node to list
 void add_Node(int x){
    temp=first->prev;
    ttemp=new DCLL;
    ttemp->data=x;
    ttemp->next=first;
    ttemp->prev=temp;
    first->prev=ttemp;
    temp->next=ttemp;
 }

 // Delete last node 
void del_last(){
    temp=first->prev;
    ttemp=temp->prev;
    first->prev=ttemp;
    ttemp->next=first;
    temp->prev=temp->next=NULL;
    delete temp;
}


  int main(){
    first_node(10);
    add_Node(20);
    add_Node(30);
    add_Node(40);
    add_Node(50);
    display();
    del_last();
    display();
  }
