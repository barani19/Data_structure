#include<stdio.h>
#define N 5
int queue [N];
int f=-1,r=-1;

void insertfront(int val){
    if(f==r+1 || r==N-1){
        printf("overflow");
    }
    else if(f==-1 || r==-1){
       f=r=0;
       queue[f] = val;
    }
    else if(f==0){
        f=N-1;
        queue[f]=val;
    }
    else{
        f--;
        queue[f]=val;
    }
}
void insertreaer(int val){
    if(f==r+1||r==N-1){
        printf("overfloe");
    }
    else if(f==-1||r==-1){
        f=r=0;
        queue[r]=val;
    }
    else if(r==N-1){
        r=0;
        queue[r]=val;
    }
    else{
        r++;
        queue[r]=val;
    }
}
void deltefront(){
    if(f==-1 && r==-1){
        printf("undefflow");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(f==N-1){
        printf("%d ",queue[f]);
        f=0;
    }
    else{
        printf("%d ",queue[f]);
        f++;
    }
}
void deltereaer(){
    if(f==-1||r==-1){
        printf("undrflow");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(r==0){
        printf("%d ",queue[r]);
         r=N-1;
    }
    else{
        printf("%d ",queue[r]);
        r--;
    }
}
void display(){
    int i =f;
    while (i!=r)
    {
        printf("%d ",queue[i]);
        i=(i+1)%N;
    }
    printf("%d ",queue[r]);
}
void main(){
    insertfront(2);
    insertfront(5);
    insertreaer(-1);
    insertreaer(0);
    insertfront(7);
    display();
    deltefront();
    deltereaer();
    deltefront();
}
