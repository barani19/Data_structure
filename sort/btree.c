#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(){
    struct node *cptr = (struct node*)malloc(sizeof(struct node));
    int x;
    printf("enter value of x");
    scanf("%d",&x);
    if(x==-1) return NULL;
    cptr->data = x;
    printf("enter left node");
    cptr->left = create();
    printf("enter right");
    cptr->right = create();
    return cptr;
}
void inorder(struct node *root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void main(){
    struct node *root;
    root = create();
    inorder(root);
}