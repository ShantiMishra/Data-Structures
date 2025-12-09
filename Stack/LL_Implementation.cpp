#include <iostream>
using namespace std;

struct Lstack{
    int data ;
    Lstack *next;
};
Lstack *top,*temp,*ttemp;

void init(){
    top = temp = ttemp = NULL;
}

void push(int x){
    temp = new Lstack;
    if(temp==NULL) return;
    temp->data=x;
    temp->next=top;
    top=temp;

    cout<<"Pushed : "<<x<<endl;
}

int pop(){
    int x;
    if(top==NULL)
    { return 0;}
    temp=top;
    x=temp->data;
    top=top->next;
    temp->next=NULL;
    delete temp;
    return x;
}


int main(){
    init();

     push(10);
     push(20);
     push(30);
     push(40);
     push(50);

     cout<<"Poped : "<<pop()<<endl;
     cout<<"Poped : "<<pop()<<endl;
    
}