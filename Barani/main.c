#include <stdio.h>
#include <stdlib.h>
struct node{
 int data;
 struct node *nxt;
};
struct node *head = NULL;
void inserthead(int data){
   struct node *cptr = (struct node*)malloc(sizeof(struct node));
   cptr->data = data;
   cptr->nxt = NULL;
   cptr->nxt = head;
   head = cptr;
}
void inserttail(int data){
  struct node *cptr = (struct node*)malloc(sizeof(struct node));
  cptr->data = data;
  cptr->nxt = NULL;
  if(head==NULL){
    head = cptr;
  }
  struct node *tptr = head;
  while(tptr->nxt!=NULL){
    tptr = tptr->nxt;
  }
  tptr->nxt = cptr;
}
void print(){
  struct node *tptr =head;
  while(tptr!=NULL){
    printf("%d ",tptr->data);
    tptr = tptr->nxt;
  }

}
int main()
{
    printf("Hello world!\n");
    inserthead(10);
    inserthead(20);
    inserttail(30);
    inserttail(40);
    print();
    return 0;
}
