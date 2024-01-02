#include<stdio.h>
int q[100];
int N = 5;
int fr = -1;
int rr=-1;

void enq(int data){
    if(rr==N) printf("overflow");
    else if(fr==-1 && rr==-1){
        fr=rr=0;
        q[rr]=data;
    }
    else{
        rr++;
        q[rr]=data;
    }
}

void deq(){
    if(fr==-1 && rr==-1) printf("underflow");
    else if(fr==rr){
        fr=rr=-1;
    }
    else{
        printf("deleted element %d\n",q[fr]);
        fr++;
    }

}
void peek(){
    if(fr==-1 &&rr==-1) printf("error");
    else{
        printf("peek is %d",q[fr]);
    }
}
void dis(){
    if(fr==-1 &&rr==-1) printf("errror");
    else{
        for(int i=fr;i<=rr;i++) printf("%d ",q[i]);
    }
}

void main(){
   enq(10);
   enq(20);
   enq(30);
   dis();
   deq();
   dis();
   peek();
}


