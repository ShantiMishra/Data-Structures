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

int height(BST *root){
    if(root == NULL) return -1;
    int left_height = height(root->left);
    int right_height = height(root->right);
    return 1 + max(left_height,right_height);
}

int main(){
   init();
   create_Root(100);
   add_Node(50);
   add_Node(150);
   add_Node(300);
   add_Node(10);
   add_Node(70);
   add_Node(2);
   add_Node(30);
   add_Node(15);
   add_Node(20);
   add_Node(70);
   add_Node(65);
   add_Node(90);
   add_Node(180);
   cout<<"Height is : "<<height(root);

}