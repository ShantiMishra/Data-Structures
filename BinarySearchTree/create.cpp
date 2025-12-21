#include <iostream>
using namespace std;

struct BST{
    int data ;
    BST *left ;
    BST *right;
};

BST *root,*ttemp,*temp,*P;

void init(){
    P=root=ttemp=temp=NULL;
}

void create_Root(int x){
    root = new BST;
    root->data = x;
    root->left=root->right=NULL;
}

void add_Node(int x){
    temp=root;
    while(temp!=NULL){
        ttemp=temp;
        if(temp->data>x)
         temp=temp->left;
        else
         temp=temp->right; 
    }

    P=new BST;
    P->data=x;
    P->left=P->right=NULL;
    if(ttemp->data>x)
     ttemp->left=P;
    else
     ttemp->right=P; 
}


int main(){
   init();
   create_Root(50);
   add_Node(20);
}
