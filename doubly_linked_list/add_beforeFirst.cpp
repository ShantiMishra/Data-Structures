#include <iostream>
using namespace std;


struct node{
    int data;
    node *next , *prev;
};
    node *temp,*ttemp,*p,*first;

// creating first node 

void create_first(int x){
      first=new node ;
      first->data=x;
      first->next =NULL;
    first->prev=NULL;  
}

// to display the linked list
void display(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// Addition of new node after last node
void add_node(int x){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=x;
    ttemp->next=NULL;
    temp->next=ttemp;
}

//Addition of new node before first.
void add_beforeFirst(int x){
    temp=first;
    ttemp=new node;
    ttemp->data=x;
    temp->prev=ttemp;
    ttemp->next=temp;
    ttemp->prev=NULL;
    first=ttemp;

}

int main(){
    create_first(10);
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    display();
    add_beforeFirst(90);
    display();
}