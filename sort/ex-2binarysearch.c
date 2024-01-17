#include<stdio.h>
void main(){
    int arr[100],n,k;
    printf("enter a search number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter a seach value:");
    scanf("%d",&k);
    int l=0;int h = n-1;
    int f=1;
    for(int i=0;i<n;i++){
        int m=(l+h)/2;
        if(arr[m]==k){
            printf("value is found at %d",m);
            f=0;
            break;
        }
        else if(arr[m]>k){
            h=m-1;
        }
        else if(arr[m]<k){
            l=m+1;
        }
    }
    if(f==1){
        printf("not found");
    }
}