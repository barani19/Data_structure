#include<stdio.h>
int max(int a[],int n){
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i]>m) m=a[i];
    }
    return m;
}
int count(int a[],int m){
    int count[10];
    int b[10];
    for(int i=0;i<10;i++){
        count[i]=0;
        b[i]=0;
    }
   for(int i=0;i<7;i++){
     ++count[a[i]];
   }
   for(int i=1;i<10;i++){
     count[i] = count[i]+count[i-1];
   }
   for(int i=6;i>=0;i--){
          b[--count[a[i]]] = a[i];
   }
   for(int i=0;i<7;i++) printf("%d",b[i]);

}

void main(){
    int a[7] = {4,1,5,2,4,1,2};
    int ma = max(a,7);
    count(a,ma);

}