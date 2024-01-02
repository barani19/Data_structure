#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *nxt;
};
struct node *head = NULL;

void insertathead(int data){
    struct node *cptr = (struct node*)malloc(sizeof(struct node));
    cptr->data = data;
    if(head!=NULL){
        head->prev = cptr;
    }
    cptr->nxt = head;
    head = cptr;
}
void insertatail(int data){
     struct node *cptr = (struct node*)malloc(sizeof(struct node));
     cptr->data = data;
     if(head==NULL){
        head = cptr;
     }
     struct node *tptr = head;
     while(tptr->nxt!=NULL){
        tptr = tptr->nxt;
     }
     tptr->nxt = cptr;
     cptr->prev = tptr;
}
void insertmid(int data,int pos){
    struct node *tptr = head;
     struct node *cptr = (struct node*)malloc(sizeof(struct node));
     cptr->data = data;
     for(int i=0;i<pos-1;i++){
          tptr = tptr->nxt;
     }
     struct node *t = tptr->nxt;
     tptr->nxt = cptr;
     cptr->nxt = t;
     cptr->prev = tptr;
    
}
void deleteathead(){

    if(head==NULL) return ;
    else{
        head = head->nxt;
        head->prev = NULL;
    }
}
void deleteatail(){
struct node *tptr = head;
  if(head==NULL) return ;
  while (tptr->nxt!=NULL)
  {
     tptr = tptr->nxt;
  }
  tptr->nxt = NULL;
  
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
    insertmid(19,3);
    print();
}