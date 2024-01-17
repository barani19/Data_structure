#include<stdio.h>
 void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
void heap(int a[],int n,int i){
    int larg = i;
    int l = (i*2)+1;
    int r = (i*2)+2;
    while(l<n && a[l]>a[larg]){
        larg = l;
    }   
     while(r<n && a[r]>a[larg]){
        larg = r;
    }
    if(larg!=i){
        swap(&a[i], &a[larg]);
        heap(a,n,larg);
    }
}
void main(){
     int a[] = { 543, 986, 217, 765, 329 };
     int n = 5;
     for(int i=(n/2)-1;i>=0;i--){
        heap(a,n,i);
     }
     for(int i=n-1;i>=0;i--){
        swap(&a[0], &a[i]);
        heap(a,i,0);
     }
     for(int i=0;i<n;i++) printf("%d ",a[i]);
}

// leaf node  = (n/2)-1 to n
// remaining are a internode or root mode



