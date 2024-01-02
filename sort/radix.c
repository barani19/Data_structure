#include<stdio.h>

int max(int a[],int n){
    int m =0;
    for(int i=0;i<n;i++) if(a[i]>m) m=a[i];
    return m; 
}

void count_sort(int a[],int n,int pos){
    int count[10]={0};
    int b[10]={0};
    for(int i=0;i<n;i++){
        ++count[(a[i]/pos)%10];
    }
    for(int i=1;i<10;i++){
      count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        b[--count[(a[i]/pos)%10]] = a[i];

    }
    for(int i=0;i<n;i++){
     a[i] = b[i];
    }
    

}

void main(){
     int a[] = { 543, 986, 217, 765, 329 };
    int ma = max(a,5);
    for(int pos=1;(ma/pos)>0;pos*=10){
      count_sort(a,5,pos);
    }
    for(int i=0;i<5;i++) printf("%d  ",a[i]);
    
}