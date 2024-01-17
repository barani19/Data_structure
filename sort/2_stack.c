#include<stdio.h>
void main(){
    int a[] = {5,8,2};
    int b[] = {5,8,2};
    int i =0 , j =2;
    while(i<3 && j>=0){
        if(a[i]>a[j]){
            printf("1 ");
            j--;
        }
        else if(a[i]<a[j]){
            printf("2 ");
            i++;
        }
        else{
            printf("0 ");
            i++;
            j--;
        }

    }
}