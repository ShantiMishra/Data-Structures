#include <iostream>
using namespace std;

struct Mstack{
     int data[6];
     int topA,topB;
};

Mstack S,*P;

void init(){
    P=&S;
    P->topA = -1 ;
    P->topB = 6;
}

int emptyA(){
    if(P->topA==-1)
    return 1 ;
    else
    return 0;
}

int emptyB(){
    if(P->topB==6)
    return 1;
    else
    return 0;
}

int full(){
    if(P->topA+1==P->topB)
    return 1;
    else 
    return 0;
}

void pushA(int x){
    if(full()) return;
    P->topA++;
    P->data[P->topA]=x;
}

void pushB(int x){
    if(full()) return ;
    P->topB--;
    P->data[P->topB]=x;
}

int popA(){
    int x;
    if(emptyA())return 0;
    x=P->data[P->topA];
    P->topA--;
    return x;
}

int popB(){
    int x;
    if(emptyB()) return 0;
    x=P->data[P->topB];
    P->topB++;
    return x;
}


int main(){
     
    init();

    pushA(10);
    pushA(20);
    pushB(40);
    pushA(30);
    pushB(78);

    cout<<popA()<<endl;
    cout<<popA()<<endl;
    cout<<popB()<<endl;
    cout<<popB()<<endl;
}