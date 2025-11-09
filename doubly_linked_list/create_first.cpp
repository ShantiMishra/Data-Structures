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
        cout<<temp->data;
        temp=temp->next;
    }
}


int main(){
    create_first(10);
    display();
}