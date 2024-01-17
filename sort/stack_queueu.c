#include<stdio.h>
void main(){
    int a[] = {10 ,9 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8};
    int n = sizeof(a)/sizeof(a[0]);
    int k=5;
    int b[100],z=0,s;
    for(int i=n-1;i>n-k;i--){
        b[z] = a[i];
        s+=b[z];
        z++;
    }
    int c[100],y=s,x=0,p=0;
    c[0] = a[0] + y;
    int max = c[0];
    for(int i=1;i<k;i++){
        p += a[i-1];
        y-=b[--z];
        x = p +  a[i] + y;
        c[i] = x;
        if(max<x){
            max=x;
        }
    }
    printf("%d",max);
}

#include <stdio.h>

int main(){
	int n,k,a[100];
	scanf("%d",&n);
    scanf("%d",&k);
	for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[100],z=0,s=0;
    for(int i=n-1;i>n-k;i--){
        b[z] = a[i];
        s+=b[z];
        z++;
    }
    int c[100],y=s,x=0,p=0;
    c[0] = a[0] + y;
    int max = c[0];
    for(int i=1;i<k;i++){
        p += a[i-1];
        y-=b[--z];
        x = p +  a[i] + y;
        c[i] = x;
        if(max<x){
            max=x;
        }
    }
    printf("%d",max);     // Writing output to STDOUT
}
