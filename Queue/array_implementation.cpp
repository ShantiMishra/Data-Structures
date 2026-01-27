#include <iostream>
using namespace std;


struct queue{
    int data[5];
    int front , rear;
};
queue *P , Q1;
void init (){
    P=&Q1;
    P->front=P->rear=-1;
}

int full(){
    if(P->rear==4){
        return 1;
    }
    else{
        return 0;
    }
}

int empty(){
    if(P->front==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void EnQ(int x){
    if(full()==1){
        return ;
    }
    if(P->rear==-1){
        P->front=P->rear=0;
    }
    else{
        P->rear++;
        P->data[P->rear]=x;
    }
}

int DeQ(){
    int x;
    if(empty()==1){
        cout<<"Queue Underflow";
    }

    x=P->data[P->front];
    if(P->front==P->rear){
        P->front=P->rear=-1;
    }
    else{
        P->front++;
        return x;
    }   
}




int main(){
    init();
    EnQ(10);
    EnQ(20);
    EnQ(30);
    EnQ(40);
    cout<<DeQ();
}

