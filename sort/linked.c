#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *nxt;
};
struct node *head = NULL;
void insertathead(int data){
    struct node *nptr = (struct node*)malloc(sizeof(struct node));
    nptr->nxt = head;
    nptr->data = data;
    head=nptr;
}
void insertatail(int data){
    struct node *nptr = (struct node*)malloc(sizeof(struct node));
    nptr->data = data;
    nptr->nxt = NULL;
    if(head==NULL){
        head = nptr;
    }
    struct node *tptr = head;
    while (tptr->nxt!=NULL)
    {
        tptr = tptr->nxt;
    }
    tptr->nxt = nptr;
}
void deleteathead(){
    if(head==NULL) printf("underflow");
    else  head = head->nxt;
}
void deleteatail(){
    struct node *tptr = head;
    if(tptr==NULL) printf("underflow");
    else{
        while(tptr->nxt->nxt!=NULL){
            tptr=tptr->nxt;
        }
        tptr->nxt=NULL;
    }
}
void reverse(){
    struct node *next = NULL;
    struct node *curr = head;
    struct node *prev = NULL;
    while(curr!=NULL){
        next = curr->nxt;
        curr->nxt = prev;
        prev = curr;
        curr = next;
    } 
    head = prev;
}
void sort(){
    struct node *curr =head;
    struct node *temp = head;
    while(curr->nxt!=NULL){
        while(temp->nxt!=NULL){
            if(curr->data>temp->data){
                struct node *t = temp;
                temp->nxt = curr->nxt;
                curr->nxt = t->nxt;
            }
            temp = temp->nxt;
        }
        curr=curr->nxt;
    }
}
void print(){
    struct node *tptr = head;
    while(tptr!=NULL){
        printf("%d ",tptr->data);
        tptr=tptr->nxt;
    }
}
void main(){
    insertathead(10);
    insertathead(20);
    insertathead(30);
    // print();
    insertatail(100);
    // print();
    // deleteathead();
    // deleteathead();
    // deleteatail();
    // print();
    //reverse();
    sort();
    print();
}
