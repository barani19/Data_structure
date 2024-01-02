#include<stdio.h>
 void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  void main(){
     int a[] = { 543, 986, 217, 765, 329 };
     int n = sizeof(a)/sizeof(a[0]);
     for(int gap =n/2;gap>=1;gap/=2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i-=gap){
                if(a[i+gap]>a[i]) break;
                else{
                    swap(&a[i+gap],&a[i]);
                }
            }
        }
     }
      for(int i=0;i<5;i++) printf("%d  ",a[i]);
  }